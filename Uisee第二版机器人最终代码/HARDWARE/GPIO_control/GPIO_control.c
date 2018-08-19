#include "GPIO_control.h"
#include "stm32f10x.h"

void GPIO_control_Init(void)
{
	RCC->APB2ENR |= 1<<5;      //ʹ��PORTDʱ��
	
	//GPIO PB0
	GPIOD->CRL &= 0xFFFFF0FF;
	GPIOD->CRL |= 0x00000800;  //PD2����Ϊ���룬Ĭ��Ϊ����
	GPIOD->ODR |= 1<<2;        //PD2����Ϊ����
}
