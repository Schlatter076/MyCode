#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********************˫��ָ���������***************************/
/*
void main()
{
	int a[5]={2,3,4,5,6},b[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *ptr1,*p1,**p2,i,j;
	ptr1=a;  //ptr1ָ������a
	p2=&ptr1;  //p2ָ��ptr1
	printf("First_a[5]=\n");
	for(i=0;i<5;i++)
		printf("%6d",*(*p2+i));
	printf("\n");
	printf("Second_a[5]=\n");
	for(;ptr1-a<5;ptr1++)
		printf("%6d",**p2);
	printf("\n");
	printf("First_b[3][4]=\n");
	for(i=0;i<3;i++)
	{
		p1=b[i];
	    p2=&p1;
		for(j=0;j<4;j++)
			printf("%6d",*(*p2+j));
		printf("\n");
	}
	printf("Second_b[3][4]=\n");
	for(i=0;i<3;i++)
	{
		for(p1=b[i];p1-b[i]<4;p1++) {
			p2=&p1;
			printf("%6d",**p2);
		}
		printf("\n");
	}
}*/
/*********************�����ַ�����***************************/
/*
void main()
{
    int i;
	static char c[][16]={"suzhou","hangzhou","guangzhou","shenzhen"};
	static char *cp[]={c[0],c[1],c[2],c[3]};  //����ָ������ָ������c��ÿ��
	static char **cpp;  //����˫�����飬����ָ��ָ������
	cpp=cp;  //cppָ��cp
	for(i=0;i<4;i++)
		printf("%s\n",*cpp++);
	printf("-----------------\n");
	for(i=0;i<4;i++) {
	    cpp=&cp[i];
		printf("%s\n",*cpp);
	}
}*/

void main()
{
    char *p="It is ok";
	printf("%s\n",*p);
}