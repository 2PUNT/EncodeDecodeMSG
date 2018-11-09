#include "EncodeDecodeMSG.hpp"

uint16_t EncodeDecodeMSG::EncodeMessage(Message msg){
	//start with startbit
	uint16_t emsg = 0x0001;
	//add playerid
	emsg |= msg.senderID << 1;
	//add data
	emsg |= msg.data << 6;
	
	// 5 control bits
	
	emsg |= ((msg.senderID ^ msg.data) << 11);
	return emsg;
}

Message EncodeDecodeMSG::DecodeMessage(uint16_t encodedMessage){
	Message msg;
	// 5 player bits
	msg.senderID = (encodedMessage >> 1) & 0x001f;
	// 5 data bits
	msg.data = (encodedMessage >> 6) & 0x001f;
	
	return msg;
}
