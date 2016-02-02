/*
 * CriticalSection.h
 *
 *  Created on: 31.1.2016
 *      Author: krl
 */

#ifndef CRITICALSECTION_H_
#define CRITICALSECTION_H_

// returns the interrupt enable state before entering critical section
bool enter_critical(void);

// restore interrupt enable state
void leave_critical(bool enable);

#endif /* CRITICALSECTION_H_ */
