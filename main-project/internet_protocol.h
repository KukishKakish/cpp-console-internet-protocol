#ifndef INTERNET_PROTOCOL
#define INTERNET_PROTOCOL
#include "constants.h"
struct time {
	int hours;
	int minutes;
	int seconds;
};
struct path {
	char disk [MAX_STRING_SIZE];
	char users [MAX_STRING_SIZE];
	char user1 [MAX_STRING_SIZE];
	char programm [MAX_STRING_SIZE];
};
struct bytes {
	unsigned int number;
};
struct iternet_protocol {
	time start;
	time finish;
	bytes sent;
	bytes recieved;
	path program;
};
#endif