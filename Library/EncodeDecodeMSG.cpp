#include "EncodeDecodeMSG.hpp"

uint16_t EncodeMessage(Message msg){
	//start with startbit
	uint16_t emsg = 0x0001;
	//add playerid
	emsg |= msg.senderID << 1;
	//add data
	emsg |= msg.data << 6;
	
	// 5 control bits
	for(int i = 0; i < 5; i++){
		//store te relevant bits
		bool bit1 = (emsg >> (1+i)) & 1;
		bool bit2 = (emsg >> (6+i)) & 1;
		//XOR
		bool tmp = bit1 ^ bit2;
		//add XOR bit to encodedmessage
		emsg |= tmp << (11+i);
	}
	
	return emsg;
}

Message DecodeMessage(uint16_t encodedMessage){
	Message msg;
	// 5 player bits
	msg.senderID = (encodedMessage >> 1) & 0x001f;
	// 5 data bits
	msg.data = (encodedMessage >> 6) & 0x001f;
	
	return msg;
}