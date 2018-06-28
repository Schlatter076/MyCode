#include<stdio.h>
#include<math.h>
#include<conio.h>

//勾股定理
/*
void main()
{
    float a,b,c;
	printf("请输入两直角边的值：\n");
	scanf("%f",&a);
	scanf("%f",&b);
	c=sqrt((a*a)+(b*b));    //sqrt()函数为开根号函数
	printf("斜边=%f\n",c);
	getch();
}*/

//等差数列求和

void main()
{
    int i,s=0,n;
	printf("求1到n的和\n\n令n=");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
	    printf("i=%d  ",i);
		s=s+i;
	}
	printf("\n1+..+n=%d",s);
	getch();
}

//字符转换
/*
void main(){
	char c1,c,c2;
	printf("plese input character :");
	c=getchar();		//getchar函数得到的字符赋给变量c
	c1=c-1;			    //前驱字符
	c2=c+1;			    //后继字符
	printf("%c  %d  ,%c  %d  ,%c  %d \n",c1,c1,c,c,c2,c2);
	getch();
}*/