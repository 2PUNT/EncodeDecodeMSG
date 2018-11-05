#include <stdint.h>
#include <bitset>
#include <iostream>
#include "Message.hpp"
#include "EncodeDecodeMSG.hpp"

//Testing

int main(void){
	auto coder = EncodeDecodeMSG();
	
	Message start = Message();
	start.data = 20;
	start.senderID = 9;
	
	//encoding
	uint16_t encodedmsg = coder.EncodeMessage(start);
	
	std::cout<< std::bitset<16>(encodedmsg) << std::endl;
	//decoding
	Message decoded = coder.DecodeMessage(encodedmsg);
	std::cout << int(decoded.data) <<"	"<<  int(decoded.senderID) << std::endl;
}