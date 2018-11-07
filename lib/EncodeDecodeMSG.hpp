#ifndef _ENCODE_DECODE_MSG
#define _ENCODE_DECODE_MSG
//#include "message.hpp"
#include "ADTs.hpp"
#include <stdint.h>

class EncodeDecodeMSG{
public:
	EncodeDecodeMSG(){};
	
	uint16_t EncodeMessage(Message msg);
	Message DecodeMessage(uint16_t encodedMessage);
};





#endif