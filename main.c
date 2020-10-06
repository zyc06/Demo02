/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * 文件名  ： main
 * 作者    ：zhangyuchen06
 * 版本    ： V1.0.0
 * 时间    ： 2020-10-06
 * 简要    ：   
 ********************************************************************
 * 副本
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include<iocc2530.h>

#define LED1 P1_0     // P1_0定义为P1.0
#define LED2 P1_1     // P1_1定义为P1.1

typedef unsigned int UINT;
typedef unsigned char UCHAR;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：Delay
* 参数：time
* 返回：void
* 描述：延时函数
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void Delay(unsigned int time)
{
     unsigned int i = 0;
     unsigned int j;
     for(i = 0; i < time; i++)
  {
for(j = 0; j < 475; j++)
{   asm("NOP");   
          asm("NOP");
          asm("NOP");
       }  
    }  
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 函数名：main
 * 参数：void
 * 返回：void
 * 描述：主函数/入口函数
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void main(void)
{
    P1SEL &= ~(0x03);
    P1DIR |= 0x03 ;   
while(1)
{
      LED1 = 1;    
      LED2 = 0;    
      Delay(1000);
      LED1 = 0;    
      LED2 = 1;     
      Delay(1000);
}    
}
