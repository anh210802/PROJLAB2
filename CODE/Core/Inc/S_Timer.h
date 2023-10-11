/*
 * S_Timer.h
 *
 *  Created on: Oct 11, 2023
 *      Author: anhxa
 */

#ifndef INC_S_TIMER_H_
#define INC_S_TIMER_H_

extern int timer1_flag = 0;
extern int timer2_flag = 0;

void setTimer1(duration);
void setTimer2(duration);

void timerRun();

#endif /* INC_S_TIMER_H_ */
