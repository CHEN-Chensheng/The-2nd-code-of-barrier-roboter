#include "GPIO_control.h"
#include "stm32f10x.h"

void GPIO_control_Init(void)
{
	RCC->APB2ENR |= 1<<5;      //使能PORTD时钟
	
	//GPIO PB0
	GPIOD->CRL &= 0xFFFFF0FF;
	GPIOD->CRL |= 0x00000800;  //PD2设置为输入，默认为下拉
	GPIOD->ODR |= 1<<2;        //PD2设置为上拉
}
