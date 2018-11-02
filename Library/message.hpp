#ifndef _MESSAGE
#define _MESSAGE
#include <stdint.h>

struct Message{
	uint8_t senderID;
	uint8_t data;
public:
	Message(){};
};


#endif