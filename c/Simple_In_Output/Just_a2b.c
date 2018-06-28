#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Exchange a to b\n");
	printf("a=%d,b=%d\n",a,b);
	return 0;
}