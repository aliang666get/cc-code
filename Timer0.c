#include <REGX52.H>
/**
  * @brief  定时器0初始化，1毫秒
  * @param  无
  * @retval 无
  */
void Timer0_Init()//定时器初始化
{
	TMOD=0X01;
	TF0=0;//先清0，防止一开始就出现中断
	TR0=1;//允许计数器开始计数
	TL0=64535%256;//后4为
	TH0=64535/256;//前四位
	EA=1;//中断总开关打开
	ET0=1;
	PT0=0;//配置最低优先级
	
	
}
//一秒后中断模板
//void Timer0_Routine() interrupt 1
//{
//	static unsigned int T0count;
//	TL0=64535%256;//后4为
//	TH0=64535/256;
//	T0count++;
//	if(T0count>=1000)
//	{
//		T0count=0;
//		P2_0=~P2_0;
//	}
//	
//	
//}
