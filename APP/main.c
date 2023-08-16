/*
 * main.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Rowan Madeeh
 */

#include "../HAL/7 segment/7_segment_init.h"
#include "../MCAL/DIO/DIO.h"

void  main()
{
	HSSD_VoidSET_PORT(0);
	HSSD_VoidSET_PORT(1);
	HSSD_VoidSET_PORT(2);
	HSSD_VoidSET_PORT(3);

	u8 LA_minutes_itiration=0;
	u8 LA_hours1_itiration=0;
	u8 LA_hours2_itiration=0;

	while(1)
	{
		HSSD_VoidDisplayNumber(2,LA_minutes_itiration);
		HSSD_VoidDisplayNumber(0,LA_hours1_itiration);
		HSSD_VoidDisplayNumber(1,LA_hours2_itiration);
		HSSD_VoidCountup(3,zero);


		LA_minutes_itiration++;

		if (LA_minutes_itiration==6){
			LA_minutes_itiration=0;
			LA_hours1_itiration++;
		}

		if(LA_hours1_itiration==10)
		{
			LA_hours1_itiration=0;
			LA_hours2_itiration++;
		}


	}
}
