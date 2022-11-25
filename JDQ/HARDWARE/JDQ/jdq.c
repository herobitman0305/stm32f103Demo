#include "jdq.h"
 
 
void relay_init(void)//�Լ̵�����ʼ��������PB7�ڳ�ʼ��
{
  GPIO_InitTypeDef     GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_12|GPIO_Pin_14|GPIO_Pin_13;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
  GPIO_Init(GPIOB, &GPIO_InitStructure);
	
}          
 
void relay_on(void)//PB7��1
{
  GPIO_SetBits(GPIOB,GPIO_Pin_9|GPIO_Pin_12|GPIO_Pin_14|GPIO_Pin_13);
}
 
void relay_off(void)//PB7��0
{ 
  GPIO_ResetBits(GPIOB,GPIO_Pin_9|GPIO_Pin_12|GPIO_Pin_14|GPIO_Pin_13);
}
