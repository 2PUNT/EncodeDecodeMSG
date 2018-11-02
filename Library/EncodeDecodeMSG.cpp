#include "EncodeDecodeMSG.hpp"

uint16_t EncodeMessage(Message msg){
	//start with startbit
	uint16_t emsg = 0x0001;
	//add playerid
	emsg |= msg.senderID << 1;
	//add data
	emsg |= msg.data << 6;
	
	//control bits
	for(int i = 0; i < 4; i++){
		//store te relevant bits
		bool bit1 = (emsg >> (1+i)) & 1;
		bool bit2 = (emsg >> (6+i)) & 1;
		//XOR
		bool tmp = bit1 ^ bit2;
		//add XOR bit to encodedmessage
		emsg |= tmp << (12+i);
	}
	
	return emsg;
}

Message DecodeMessage(uint16_t encodedMessage){
	Message msg;
	//player bits(5)
	msg.senderID = (encodedMessage >> 1) & 0x001f;
	//data bits(6)
	msg.data = (encodedMessage >> 6) & 0x003f;
	
	return msg;
}