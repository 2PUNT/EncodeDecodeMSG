#include <stdint.h>
#include <bitset>
#include <iostream>
#include "Message.hpp"
#include "EncodeDecodeMSG.hpp"

//Decode Example

int main(void){
	uint16_t encodedmsg  = 0x53f6;
	
	//decoding
	Message decoded = DecodeMessage(encodedmsg);
	std::cout << decoded.data <<"	"<<  decoded.senderID << std::endl;
}