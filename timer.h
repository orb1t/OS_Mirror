#ifndef _TIMER_H_
#define _TIMER_H_ 1

#include <stdint.h>
#include "stdio.h"
#include "port.h"

class Timer
{
public:
	Timer();
	~Timer();
	void install_timer();
private:
};

void timer_handler_driver(struct regs *r);
#endif