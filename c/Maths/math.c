#include<stdio.h>
#include<math.h>
#include<conio.h>

//���ɶ���
/*
void main()
{
    float a,b,c;
	printf("��������ֱ�Ǳߵ�ֵ��\n");
	scanf("%f",&a);
	scanf("%f",&b);
	c=sqrt((a*a)+(b*b));    //sqrt()����Ϊ�����ź���
	printf("б��=%f\n",c);
	getch();
}*/

//�Ȳ��������

void main()
{
    int i,s=0,n;
	printf("��1��n�ĺ�\n\n��n=");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
	    printf("i=%d  ",i);
		s=s+i;
	}
	printf("\n1+..+n=%d",s);
	getch();
}

//�ַ�ת��
/*
void main(){
	char c1,c,c2;
	printf("plese input character :");
	c=getchar();		//getchar�����õ����ַ���������c
	c1=c-1;			    //ǰ���ַ�
	c2=c+1;			    //����ַ�
	printf("%c  %d  ,%c  %d  ,%c  %d \n",c1,c1,c,c,c2,c2);
	getch();
}*/