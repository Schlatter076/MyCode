#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define F_CPU 11059200
/***********加速*******************/
//double speedUP_freq[]={0.0010,0.00070,0.00050,0.000250,0.000200,0.000175,0.000155,0.000125,0.000111,0.0000925,0.0000825,0.0000725,0.0000625,0.0000525,0.00004125,0.00003125};
/***********减速*******************/
//double speedDOWN_freq[]={0.0010,0.00070,0.00050,0.000250,0.000200,0.000175,0.000155,0.000125,0.000111,0.0000925,0.0000825,0.0000725,0.0000625,0.0000525,0.00004125,0.00003125};
//double time_speed = 0.0010;
//double TCNT1=65536-F_CPU/8*0.00100;
//int T_Count;
/***
void timer1_count_isr(void) 
{ 
	TCNT1=65536-F_CPU/8*time_speed;
	if(++T_Count!=1) return;
    T_Count=0;
	printf("%lf\n",TCNT1);
}

void Motor_speedUP(unsigned char m)  //电机加速函数
{
  unsigned char i = 0;
  //unsigned int second = 20;
  while(m>i)
  {
     time_speed = speedUP_freq[i];
	 printf("time_speed=%lf\n",time_speed);
	 TCNT1=65536-F_CPU/8*time_speed;
	 printf("TCNT1=%lf\n",TCNT1);
	 i++;
  }
  //return(time_speed);
  //time_speed = speedUP_freq[m];
  
}
void Motor_speedDOWN(unsigned char m) //电机减速函数
{
  unsigned char i=14;
  //unsigned int second = 20;
  while(i>m)
  {
     time_speed = speedDOWN_freq[i];
	 printf("time_speed=%lf\n",time_speed);
	 i--;
  }
  //time_speed = speedDOWN_freq[m];
}
void main()
{

	Motor_speedUP(14);
	
}***/
/***
void main()
{
	int i=0;
	//float freq=4800;
	float freq=64000;
	float  OCR1A;
	/*
	while(freq<64000) {
	    freq+=20;
		printf("此时频率是:%.2f\n",freq);
		OCR1A=11059200/16/freq;
		printf("OCR1A=%.2f\n",OCR1A);
		i+=1;
		printf("循环次数:%d\n",i);
	}*/
	/***
	while(freq>32000) {
	    freq-=20;
		printf("此时频率是:%.2f\n",freq);
		OCR1A=11059200/16/freq;
		printf("OCR1A=%.2f\n",OCR1A);
		i+=1;
		printf("循环次数:%d\n",i);
	}

}***/

void CalculateSModelLine_1(float fre[],  unsigned short period[],   float  len,  float fre_max,  float fre_min, float flexible)
{
    int i=0;
    float deno ;
    float melo ;
    float delt = fre_max-fre_min;
    for(; i<len; i++)
    {
        melo = flexible * (i-len/2) / (len/2);
        deno = 1.0 / (1 + expf(-melo));   //expf is a library function of exponential(e) 
        fre[i] = delt * deno + fre_min;
        period[i] = (unsigned short)(11059200.0 / fre[i]);    // 10000000 is the timer driver frequency
		//if((i % 10)==0)
			//printf("\n");
		//printf("%.2f,",fre[i]);
    }
    return ;
}
/////////////////////////////////////////////////////////////////////
void CalculateSModelLine_2(float fre[],  unsigned short period[],   float  len,  float fre_max,  float fre_min, float flexible)
{
    int i=0;
    float deno ;
    float melo ;
    float delt = fre_max-fre_min;
    for(; i<len; i++)
    {
        melo = flexible * (i-len/2) / (len/2);
        deno = 1.0 / (1 + expf(-melo));   //expf is a library function of exponential(e) 
        fre[i] = fre_max-delt * deno;
        period[i] = (unsigned short)(11059200.0 / fre[i]);    // 10000000 is the timer driver frequency
		if((i % 10)==0)
		     printf("\n");
		printf("%.2f,",fre[i]);
    }
    return ;
}
/////////////////////////////////
void pul_up_to(float fre_arr[],int i,int m)
{
	float freq;
	float OCR1A;
	//Up_SLine(freq_up,1000,64000,3000,6);
	while(i<m) {
		freq=fre_arr[i];
		OCR1A=F_CPU/2.0/8/freq;
		i++;
		//delay_nus(300);
		printf("freq=%.2f,OCR1A=%.2f\n",freq,OCR1A);
	}
}
//==============================================================================
void pul_down_to(float fre_arr[],int i,int m)
{
	float freq;
	float OCR1A;
	//float freq_down[1000];
	//Down_SLine(freq_down,1000,64000,3000,6);
	while(i<m) {
	    freq=fre_arr[i];
		OCR1A=F_CPU/2.0/8/freq;
		i++;
		//delay_nus(300);
		printf("freq=%.2f,OCR1A=%.2f\n",freq,OCR1A);
	}
}
void main()
{
	unsigned int i=0;
	float Freq_up[1000];
	unsigned short Period_up[1000];
	float Freq_down[1000];
	unsigned short Period_down[1000];
	CalculateSModelLine_1(Freq_up, Period_up, 1000, 48000, 500, 6);
	CalculateSModelLine_2(Freq_down, Period_down, 1000, 48000, 500, 6);
	//pul_up_to(Freq_up,0,999);
	//pul_down_to(Freq_down,0,501);
	//printf("\n\n");
	//pul_down_to(Freq_down,501,999);
	/***
	while(i<1000) {
	    printf("i=%d,频率1=%.4f,周期1=%d,频率2=%.4f,周期2=%d\n",i,Freq_up[i],Period_up[i],Freq_down[i],Period_down[i]);
		i++;
	}***/
}