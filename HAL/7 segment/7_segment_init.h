/*
 * 7_segment_init.h
 *
 *  Created on: Aug 13, 2023
 *      Author: Rowan Madeeh
 */

#ifndef HAL_7_SEGMENT_7_SEGMENT_INIT_H_
#define HAL_7_SEGMENT_7_SEGMENT_INIT_H_
#include "../../LIB/std_types.h"

#define Cathode 1
#define Anode   2

#define SSD_Type	Cathode

#define zero 0
#define one 1
#define two 2
#define three 3
#define four 4
#define five 5
#define six 6
#define seven 7
#define eight 8
#define nine  9

void HSSD_VoidSET_PORT(u8 A_PortNum);
void HSSD_VoidDisplayNumber(u8 A_u8SSDPort,u8 A_u8Num);
void HSSD_voidTurnOff(u8 A_u8SSDPORT);
void HSSD_VoidCountup(u8 A_u8SSDPort,u8 A_u8Num);
void HSSD_VoidCountdown(u8 A_u8SSDPort,u8 A_u8Num);

#endif /* HAL_7_SEGMENT_7_SEGMENT_INIT_H_ */
