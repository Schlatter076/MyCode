#include <stdio.h>

int quanju;
int min(int x,int y);

int main()
{
	int a,b,c=0;
	printf("������a��b��ֵ:");
	scanf("%d",&a);
	scanf("%d",&b);
	quanju=min(a,b);
	printf("��СֵΪ:%d\n",quanju);
	c=a;
	a=b;
	b=c;
	printf("����a��b��ֵ:%d,%d",a,b);
}
int min(int x,int y)
{
    int t=0;
	if(x<y) t=x;
	else t=y;
	return(t);
}