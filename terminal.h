#ifndef _TERMINAL_H_
#define _TERMINAL_H_ 1

#include "stdio.h"
#include "string.h"
#include "time.h"

class Terminal
{
public:
	Terminal();
	~Terminal();
	void initalize(uint8_t FLAGS);
private:
	uint8_t FLAGS;
	void print_logo();
	void handle_input();
};

#endif
