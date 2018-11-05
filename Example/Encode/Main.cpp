#include <bitset>
#include <iostream>
#include "Message.hpp"
#include "EncodeDecodeMSG.hpp"

//Encode Example

int main(void){
	auto coder = EncodeDecodeMSG();
	
	Message testmsg = Message();
	testmsg.senderID = 10;
	testmsg.data = 6;
	
	uint16_t Encoded = coder.EncodeMessage(test);
	std::cout << std::bitset<16>(Encoded);
}