#include <REGX52.H>
#include "DELAY.H"
//m代表着按下哪一个按键的值
unsigned char Matrixkey()
{
/**
  * @brief  按照第一列扫描
  * @param  
  * @retval 无
  */
	unsigned char m=0;
	  P1=0xFF;
		P1_3=0;
		if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);m=1;};
		if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);m=5;};
		if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);m=9;};
		if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);m=13;};
		/**
  * @brief  按照第二列扫描
  * @param  
  * @retval 
  */
		 P1=0XFF;
		P1_2=0;
		if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);m=2;};
		if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);m=6;};
		if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);m=10;};
		if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);m=14;};
		/**
  * @brief  按照第三列扫描
  * @param  
  * @retval 
  */
		P1=0XFF;
		P1_1=0;
		if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);m=3;};
		if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);m=7;};
		if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);m=11;};
		if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);m=15;};
		/**
  * @brief  按照第四列扫描
  * @param  
  * @retval 
  */
		P1=0XFF;
		P1_0=0;
		if(P1_7==0){Delay(20);while(P1_7==0);Delay(20);m=4;};
		if(P1_6==0){Delay(20);while(P1_6==0);Delay(20);m=8;};
		if(P1_5==0){Delay(20);while(P1_5==0);Delay(20);m=12;};
		if(P1_4==0){Delay(20);while(P1_4==0);Delay(20);m=16;};
		return m;
}
