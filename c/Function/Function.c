#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

//递归调用
//求阶乘

int n;
int factor(int n) {
    int answer;
	if (n==1) return (1);
	answer=factor(n-1)*n;
	return(answer);
}
void main() {
	printf("求n的阶乘\n");
    printf("n=");
	scanf("%d",&n);
	printf("n! =%d",factor(n));
	getch();
}


//函数调用与内嵌代码(内嵌代码运行时间快于内调函数)
//内嵌代码：
/*
void main()
{
    int x;
	for(x=1;x<11;++x)
	{
	    printf("%d  ",x*x);
	}
	getch();
}*/

//内调函数：
/*
int x;
int sq(int x)
{
    return (x*x);
}

void main()
{
	
	for(x=1;x<11;++x)
	{
	    printf("%d  ",sq(x));
	}
	getch();
}*/

//字符串显示及反向显示
/***
void fanzhuan(char a[],int index);
void main()
{
    char a[80];
	int index=0;
	strcpy(a,"This is a string.");
	fanzhuan(a,index);
	getch();
}

void fanzhuan(char a[],int index)
{
    if(a[index]) 
	{
	    printf("%c",a[index]);  //正向显示 
		fanzhuan(a,index+1);    //递归调用
		printf("%c",a[index]);  //反向显示
	}
}**/
/***
void fanzhuan(char a[],int index)
{
    for(;index<17;index++)
	{
	    printf("%c",a[index]); //正向显示
	}
	for(index=17;index>=0;index--)    //用for循环实现字符串输出显示
	{
	     printf("%c",a[index]);  //反向显示
	}
	
}***/