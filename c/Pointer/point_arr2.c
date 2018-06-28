#include <stdio.h>

//二维数组按行相加
//按行相加功能未实现
/*
#define M 3
#define N 4
void fun(float b[M][N],float *p1,float *p2,float *p3)
{
    int i,j;
	*p1=*p2=*p3=0;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
		    if(i==0) *p1=*p1+b[i][j];   //第0行相加
			if(i==1) *p2=*p2+b[i][j];   //第1行相加
			if(i==2) *p3=*p3+b[i][j];   //第2行相加
		}
}
void main()
{
	float a[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	float *ptr;
	int i,j;
	float s1,s2,s3;
	void fun();  //函数声明
	ptr=a[0];
	printf("a[3][4]:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%6.1f",a[i][j]);
		printf("\n");
	}
	fun(ptr,&s1,&s2,&s3);
	printf("第0行相加的结果为:%.1f\n",s1);
	printf("第1行相加的结果为:%.1f\n",s2);
	printf("第2行相加的结果为:%.1f\n",s3);
}*/

//求最大值，并找出位置

int mAx(int *b,int *p1,int *p2,int n)
{
    int i;
	*p1=b[0];
	*p1=0;
	for(i=1;i<n;i++)
		if(b[i]>*p1)
		{
		    *p1=b[i];
			*p2=i;
		}
}

void main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{11,12,9,10}};
	int i,j,*p,max,max_i,max_j;
	p=a[0];
	printf("a[3][4]=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	mAx(p,&max,&max_i,12);
	max_j=max_i%4;
	max_i=max_i/4;   //一行有四个元素
	printf("max=%d\nmax_i=%d\nmax_j=%d\n",max,max_i,max_j);
}