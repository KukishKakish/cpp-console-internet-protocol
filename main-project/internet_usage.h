#ifndef INTERNET_USAGE
#define INTERNET_USAGE
#include "constants.h"
struct timer {
	int hours;
	int minutes;
	int seconds;
};
struct path {
	char disk[MAX_STRING_SIZE];
	char users[MAX_STRING_SIZE];
	char user1[MAX_STRING_SIZE];
	char programm[MAX_STRING_SIZE];
};
struct bytes {
	unsigned int number;
};
struct internet_usage {
	timer start;
	timer finish;
	bytes sent;
	bytes recieved;
	path program;
};
#endif
