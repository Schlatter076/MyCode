#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

//�ݹ����
//��׳�

int n;
int factor(int n) {
    int answer;
	if (n==1) return (1);
	answer=factor(n-1)*n;
	return(answer);
}
void main() {
	printf("��n�Ľ׳�\n");
    printf("n=");
	scanf("%d",&n);
	printf("n! =%d",factor(n));
	getch();
}


//������������Ƕ����(��Ƕ��������ʱ������ڵ�����)
//��Ƕ���룺
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

//�ڵ�������
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

//�ַ�����ʾ��������ʾ
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
	    printf("%c",a[index]);  //������ʾ 
		fanzhuan(a,index+1);    //�ݹ����
		printf("%c",a[index]);  //������ʾ
	}
}**/
/***
void fanzhuan(char a[],int index)
{
    for(;index<17;index++)
	{
	    printf("%c",a[index]); //������ʾ
	}
	for(index=17;index>=0;index--)    //��forѭ��ʵ���ַ��������ʾ
	{
	     printf("%c",a[index]);  //������ʾ
	}
	
}***/