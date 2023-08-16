/*
 * 7_segemnt_init.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Rowan Madeeh
 */
#include "../../LIB/std_types.h"
#include "../../LIB/BIT_MATH.h"
#include <util/delay.h>
#include "../../MCAL/DIO/DIO.h"
#include "7_segment_init.h"


u8 G_u8SSD_numbers[10]= {
	0b00111111, //0
	0b00000110, //1
	0b01011011, //2
	0b01001111, //3
	0b01100110, //4
	0b01101101, //5
	0b01111101, //6
	0b00000111, //7
	0b01111111, //8
	0b01101111  //9
};

void HSSD_VoidSET_PORT(u8 A_PortNum){

	MDIO_voidSetPortDirection(A_PortNum,0xff);

}

void HSSD_VoidDisplayNumber(u8 A_u8SSDPort,u8 A_u8Num)
{

	if(A_u8Num<=nine)
	{
		#if SSD_Type==1
			MDIO_voidSetPortValue(A_u8SSDPort,G_u8SSD_numbers[A_u8Num]);
		#elif SSD_Type ==2
			MDIO_voidSetPortValue(A_u8SSDPort,~G_u8SSD_numbers[A_u8Num]);
		#endif
	}
}

void HSSD_voidTurnOff(u8 A_u8SSDPort)
{

	#if SSD_Type==1
		MDIO_voidSetPortValue(A_u8SSDPort, 0x00);
	#elif SSD_Type==2
		MDIO_voidSetPortValue(A_u8SSDPort, 0xff);
	#endif

}

void HSSD_VoidCountup(u8 A_u8SSDPort,u8 A_u8Num)
{
	for(u8 counterup=zero; counterup <=nine; counterup++)
	{
		HSSD_VoidDisplayNumber(A_u8SSDPort,counterup);
		_delay_ms(1000);
	}
}

void HSSD_VoidCountdown(u8 A_u8SSDPort,u8 A_u8Num)
{
	for(u8 counterdown=nine; counterdown >= zero; counterdown--)
	{
		HSSD_VoidDisplayNumber(A_u8SSDPort,counterdown);
		_delay_ms(1000);
	}
}
