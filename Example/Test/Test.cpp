#include <stdint.h>
#include <bitset>
#include <iostream>
#include "Message.hpp"
#include "EncodeDecodeMSG.hpp"

//Testing

int main(void){
	Message start = Message();
	start.data = 5;
	start.senderID = 10;
	
	//encoding
	uint16_t encodedmsg = EncodeMessage(start);
	
	//decoding
	Message decoded = DecodeMessage(encodedmsg);
	std::cout << decoded.data <<"	"<<  decoded.senderID << std::endl;
}