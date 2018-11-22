#ifndef _ENCODE_DECODE_MSG
#define _ENCODE_DECODE_MSG
//#include "message.hpp"
#include "ADTs.hpp"
#include <stdint.h>

class EncodeDecodeMSG{
public:
	///@fn EncodeDecodeMSG::EncodeDecodeMSG()
    ///@brief The constructor for the EncodeDecodeMSG class.
    ///@details This constructor creates a EncodeDecodeMSG object.
	EncodeDecodeMSG(){};
	
	///@fn uint16_t EncodeDecodeMSG::EncodeMessage(Message msg)
    ///@brief Encodes message.
    ///@details This method encodes a @c Message object and returns the encoded message.
	///@param msg The message to encode.
	///@return emsg The encoded message.
	
	///@fn EncodeDecodeMSG::DecodeMessage(uint16_t encodedMessage)
    ///@brief Decodes a message.
    ///@details This method decodes a unsigned 16-bit integer message and returns a @c Message object.
	///@param encodedMessage The message to decode.
	///@return msg The decoded message.
	Message DecodeMessage(uint16_t encodedMessage);
};





#endif