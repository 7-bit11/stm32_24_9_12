#ifndef __BSP__LED_H
#define __BSP__LED_H
/***********************************************************************************************************************************
 ** ���ļ����ơ�  led.h
 ** ����д��Ա��  ħŮ�������Ŷ�
 ** ����    ����  ħŮ������      https://demoboard.taobao.com
 ***********************************************************************************************************************************
 ** ���ļ����ܡ�  �򻯳��õ�ϵͳ��������ʼ������
 **                
 ** ��Ӳ���ص㡿  1- ע��LED�Ǵ���ƽ���Ǹߵ�ƽ�������ɲ�ԭ��ͼ
 **               2- 
 **
 ** �������ص㡿  1- ���Ź���ģʽ���������
 **
 ** ����ֲ˵����  
 **
 ** �����¼�¼��  
 **
***********************************************************************************************************************************/  
#include "stm32f4xx.h"
#include <stdio.h>





//��ֲ������ +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#define  LED_RED_GPIO      GPIOC
#define  LED_RED_PIN       GPIO_Pin_5   

#define  LED_BLUE_GPIO     GPIOB
#define  LED_BLUE_PIN      GPIO_Pin_2
//END ��ֲ ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// ��ɫ�򻯹���, ��ֲʱ�����޸�
// red                      
#define LED_RED_ON         (LED_RED_GPIO->BSRRH = LED_RED_PIN)     // �������õ͵�ƽ
#define LED_RED_OFF        (LED_RED_GPIO->BSRRL = LED_RED_PIN)     // Ϩ���øߵ�ƽ
#define LED_RED_TOGGLE     (LED_RED_GPIO->ODR  ^= LED_RED_PIN)     // ��ת����ƽȡ��
// blue
#define LED_BLUE_ON        (LED_BLUE_GPIO->BSRRH  = LED_BLUE_PIN)  // �������õ͵�ƽ
#define LED_BLUE_OFF       (LED_BLUE_GPIO->BSRRL  = LED_BLUE_PIN)  // Ϩ���øߵ�ƽ
#define LED_BLUE_TOGGLE    (LED_BLUE_GPIO->ODR   ^= LED_BLUE_PIN)  // ��ת����ƽȡ��



/*****************************************************************************
 ** ����ȫ�ֺ���
****************************************************************************/
void Led_Init(void);



#endif
