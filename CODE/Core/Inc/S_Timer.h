/*
 * S_Timer.h
 *
 *  Created on: Oct 11, 2023
 *      Author: anhxa
 */

#ifndef INC_S_TIMER_H_
#define INC_S_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;


void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_S_TIMER_H_ */
