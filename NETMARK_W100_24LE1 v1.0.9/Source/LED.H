#ifndef _LED_H_
#define _LED_H_  

void gpio_init(void); //LED
void Get_Power(void); //������ʾ
void led_open(void); //����
void led_off(void); //�ػ�
void led_send(void); //����
void led_gps_failed(void); //δ���յ�GPS
void led_activate(void); //����
void led_charge(void);  //���ʱ����

extern INT16U adc_charge;//����ֵ

////////////////////
#define LED1_ON()   P13=1
#define LED1_OFF()  P13=0
#define LED2_ON()   P14=1
#define LED2_OFF()  P14=0
#define LED3_ON()   P07=1
#define LED3_OFF()  P07=0
#define LED4_ON()   P02=1
#define LED4_OFF()  P02=0
#define LED5_ON()   P16=1
#define LED5_OFF()  P16=0
#define LED6_ON()   P00=1
#define LED6_OFF()  P00=0
#define LED7_ON()   P15=1
#define LED7_OFF()  P15=0
#define LED8_ON()   P01=1
#define LED8_OFF()  P01=0

#define POWER_GRADE_1		   1
#define POWER_GRADE_2		   2
#define POWER_GRADE_3		   3
#define POWER_GRADE_4		   4
#define POWER_GRADE_5		   5
#define POWER_GRADE_6		   6
#define POWER_GRADE_7		   7
#define POWER_GRADE_8		   8
#define POWER_GRADE_9		   9
#define POWER_GRADE_10		 10
#define POWER_GRADE_FULL	   10

void delay_ms2(INT16U dj) ; 
void delay_ms3(INT16U dj) ; 

void LED_UP(void);
void LED_DOWN(void);

INT8U get_led_charge (void);   //�������
INT8U get_led_charging (void);  //���ʱ����ֵ

#endif

