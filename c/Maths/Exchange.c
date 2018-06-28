#include <stdio.h>

int quanju;
int min(int x,int y);

int main()
{
	int a,b,c=0;
	printf("请输入a和b的值:");
	scanf("%d",&a);
	scanf("%d",&b);
	quanju=min(a,b);
	printf("最小值为:%d\n",quanju);
	c=a;
	a=b;
	b=c;
	printf("交换a和b的值:%d,%d",a,b);
}
int min(int x,int y)
{
    int t=0;
	if(x<y) t=x;
	else t=y;
	return(t);
}