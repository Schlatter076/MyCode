#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/************************���ַ���2���Ƶ��ַ���1********************************/
/*
void main()
{
	char str1[30]="I love you",str2[20]="wo xi huan ni";
	char *ptr1,*ptr2;
	ptr1=str1;
	ptr2=str2;
	printf("str1[30]:");
	printf("%s",str1);
	//gets(str1);
	printf("\nstr2[20]:");
	printf("%s",str2);
	//gets(str2);
	printf("\n\nstr1----------------str2");
	printf("\n%s.....%s\n",str1,str2);
	while(*ptr2)
		*ptr1++ = *ptr2++;  //�ַ�������
	*ptr1='\0';
	printf("\nstr1----------------str2");
	printf("\n%s.....%s\n",str1,str2);
}*/

/*******************************�ַ����ĺϲ�*********************************/
/*
void main()
{
    char s1[50],s2[20],*p1,*p2;
	p1=s1;
	p2=s2;
	printf("Input s1[50]:");
	gets(s1);
	printf("\nInput s2[20]:");
	gets(s2);
	printf("\ns1---------s2\n");
	printf("%s......%s",s1,s2);
	while(*p1)  *p1++;   //�ƶ�����β
	while(*p2)  *p1++=*p2++;  //������
	*p1='\0';
	printf("\ns1---------s2\n");
	printf("%s......%s\n",s1,s2);
}*/

/**************************�ַ����Ľ���********************************/
/*
void main()
{
    char *p1,*p2,*temp;
	p1=(char *)malloc(30);  //"stdlib.h"�ж��壺��̬Ϊָ���������30B(�ֽ�)�洢�ռ�
	p2=(char *)malloc(20);
	temp=(char *)malloc(30);
	printf("Input str1:");
	gets(p1);
	printf("Input str2:");
	gets(p2);
	printf("\nstr1------str2");
	printf("\n%s......%s\n",p1,p2);
	strcpy(temp,p1);  //��׼�ַ������ƺ���
	strcpy(p1,p2);
	strcpy(p2,temp);
	printf("\nstr1------str2");
	printf("\n%s......%s\n",p1,p2);
	free(p1);  //�ͷ�Ϊp1��p2����Ĵ洢�ռ�
	free(p2);
}*/

/******************************ָ������**********************************/
/*
void main()
{
	char *p1[4]={"suzhou","guangzhou","hangzhou","chengdu"};
	int i,*p2[3],a[3]={1,2,3},b[3][2]={1,2,3,4,5,6};
	for(i=0;i<4;i++)
		printf("%s\n",p1[i]);
	for(i=0;i<3;i++)
	    p2[i]=&a[i];   //*p2[i]=a[i]�Ͳ��У�
	for(i=0;i<3;i++)
		printf("%4d",*p2[i]);
	for(i=0;i<3;i++)
	     p2[i]=b[i];
	for(i=0;i<3;i++)
		printf("\n%2d%2d",*p2[i],*p2[i]+1);
	putchar('\n');
}*/

/*************************��ά�ַ�����ð��***************************************/
/*
void main()
{
    char *p[4],a[4][20],temp[20];
	int i,j;
	printf("--------��Ҫð��--------\n");
	for(i=0;i<4;i++)
		gets(a[i]);
	for(i=0;i<4;i++)
		p[i]=a[i];
	printf("\n\nOriginal DATA:\n");
	for(i=0;i<4;i++)   //�������
		printf("%s\n",p[i]);
	//��ʼð��
	for(i=0;i<4;i++)
		for(j=0;j<4-i-1;j++)
			if(strcmp(p[j],p[j+1])>0)  //strcmp�ȽϺ������з���ֵ
			{
			    strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
	printf("\n\nResalt DATA:\n");
	for(i=0;i<4;i++)
		printf("%s\n",p[i]);
}*/

/*******************************�ַ�������***************************************/
/*
void main()
{
    char *binary();  //��������
	char *ptr[5],*temp;
	int i,j;
	printf("\n--------�ַ�������--------\n");
	printf("\nInput_5 _Strings:\n");
	for(i=0;i<5;i++)
	{
	   ptr[i]=(char *)malloc(20);  //ÿ�ж�̬�ֲ�20�ֽڴ洢�ռ�
	   gets(ptr[i]);
	}
	printf("\nOriginal_data:\n");
	loop:
	for(i=0;i<5;i++)
		printf("%s\n",ptr[i]);
	temp=(char *)malloc(20);
	printf("\nSearch_data:");
	gets(temp);
    putchar('\n');
	i=5;
	temp=binary(ptr,temp,i);  //���ַ������ַ���
	if(temp) printf("succesful......%s\n\n",temp);
	else {
			printf("Not succesful!\n");
			goto loop;
	     }
	return;
}
//�ַ������Һ���
char *binary(char *p[5],char *s,int n)
{
    int hig,low,mid;
	hig=n-1;
	low=0;
	while(low<=hig)
	{
	    mid=(hig+low)/2;
		if(strcmp(s,p[mid])<0)
			hig=mid-1;
		else if(strcmp(s,p[mid])>0)
			low=mid+1;
		else 
			return s;
	}
	return NULL;
}*/

/**************************�����ַ���**********************************/

//�ַ������Һ���'binary',����/�۰���ҷ�
int binary(char *ptr[],char *str,int n) {
    int hig,low,mid;
	hig=n-1;
	low=0;
	if(strcmp(str,ptr[low])<0) return 0;
	if(strcmp(str,ptr[hig])>0) return n;
	while(low<=hig) {
	    mid=(low+hig)/2;
		if(strcmp(str,ptr[mid])<0)
			hig=mid-1;
		else if(strcmp(str,ptr[mid])>0)
			low=mid+1;
		else return(mid);
	}
	return low;
}

//�ַ������뺯��'insert'
void insert(char *ptr[],char *str,int n,int i)
{
    int j;
	for(j=n;j>i;j--)
		strcpy(ptr[j],ptr[j-1]);  //�������ַ���֮����ַ�������
	strcpy(ptr[i],str);  //���뱻���ַ���
}

void main()
{
    int binary();   //���Һ�������
	void insert();  //���뺯������
	char *p[6],*temp;
	int i,j;
	printf("------------------�ַ�������---------------------\n");
	printf("Input_str[5]:\n");
	for(i=0;i<5;i++)
	{
	    p[i]=(char *)malloc(20);
		gets(p[i]);
	}
	p[5]=(char *)malloc(20);
	putchar('\n');
	printf("Original_data:\n");
	for(i=0;i<5;i++)
		printf("%s\n",p[i]);
	printf("\nInput_str[temp]:\n");
	temp=(char *)malloc(20);
	gets(temp);
	i=binary(p,temp,5);
	printf("\n����λ��'i'=%d\n",i);
	insert(p,temp,5,i);
	printf("\nOutput_str[6]:\n");
	for(i=0;i<6;i++)
		printf("%s\n",p[i]);
	return;
}