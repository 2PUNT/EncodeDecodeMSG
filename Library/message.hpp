#ifndef _MESSAGE
#define _MESSAGE
#include <stdint.h>

struct Message{
	uint8_t senderID;
	uint8_t data;
	
	Message(int senderID = 0, int data = 0):
	senderID(senderID),
	data(data)
	{};
};

#endif