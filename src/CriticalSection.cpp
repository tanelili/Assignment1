/*
 * CriticalSection.cpp
 *
 *  Created on: 31.1.2016
 *      Author: krl
 */
#include "chip.h"
#include "CriticalSection.h"

// returns the interrupt enable state before entering critical section
bool enter_critical(void)
{
	uint32_t pm = __get_PRIMASK();
	__disable_irq();
	return (pm & 1) == 0;
}

// restore interrupt enable state
void leave_critical(bool enable)
{
	if(enable) __enable_irq();
}



