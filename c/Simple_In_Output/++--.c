#include <stdio.h>

int main()
{
    int a=10,b;
	printf("a=%d\n",a);
	b=a++;
	printf("a++=%d\n",b);
	a=10;
	b=a--;
	printf("a--=%d\n",b);
	a=10;
	b=++a;
	printf("++a=%d\n",b);
	a=10;
	b=--a;
	printf("--a=%d\n",b);
	return 0;
}