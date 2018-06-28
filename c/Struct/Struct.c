#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************�ṹ������Ķ��������*********************/
/*
//�ṹ�����Ͷ���
struct stu
{
    char name[20];   //����
	long number;     //ѧ��
	float score[4];  //�ɼ�
};  //�ṹ�嶨�������';'��β
//��Ϣ¼�뺯��
void input(struct stu arr[],int n)
{
    int i,j;
	char temp[30];
	for(i=0;i<n;i++) {
	    printf("\nplease enter name,number,english,math,pyisic\n");
		gets(arr[i].name);  //��������
		gets(temp);
		arr[i].number=atol(temp);  //����ѧ�� 
		for(j=0;j<3;j++) {
		    gets(temp);  //�������Ƴɼ�
			arr[i].score[j]=atof(temp);
		}
	}
}
//��ɼ�ƽ��ֵ����
void aver(struct stu arr[],int n)
{
    int i,j;
	//n��ѧ��
	for(i=0;i<n;i++) {
		arr[i].score[3]=0;
		//���Ƴɼ�
		for(j=0;j<3;j++) 
			arr[i].score[3]=arr[i].score[3]+arr[i].score[j];
		arr[i].score[3]/=3;
	}
}
//��ƽ���ɼ�����/ð��
void order(struct stu arr[],int n)
{
    struct stu temp;
	int i,j;
	//ð�ݷ�
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			//�Ƚϸ�ѧ����ƽ���ɼ�
			if(arr[j].score[3]>arr[j+1].score[3])
			{
			    temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

}
//��Ҫ�����
void output(struct stu arr[],int n)
{
    int i,j;
	printf("*********************************TABLE*********************************\n");  //��ӡ��ͷ
	printf("----------------------------------------------------------------\n");
	printf("|%10s|%8s|%7s|%7s|%7s|%7s|\n","Name","Number","English","Mathema","Phisics","Average");
	printf("----------------------------------------------------------------\n");
	for(i=0;i<n;i++) {
		printf("|%10s|%8ld|",arr[i].name,arr[i].number);  //���������ѧ��
		for(j=0;j<4;j++)
			printf("|%7.2f",arr[i].score[j]);  //������Ƴɼ���ƽ���ɼ�
		printf("\n");
		printf("----------------------------------------------------------------\n");
	}
}
//���������ѧ��ƽ���ɼ�
void out_row(struct stu arr[],int n)
{
	float row[4]={0,0,0,0};  //�����ŵ���ƽ����һά����
	int i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<n;j++)
			row[i]=row[i]+arr[j].score[i];  //���㵥���ܺ�
		row[i]/=n;  //����ƽ��ֵ
	}
	printf("|%19c|",' ');  //�������ʽ���
	for(i=0;i<4;i++)
		printf("%7.2f|",row[i]);
	printf("\n----------------------------------------------------------------\n");
}
//��������ʼ
void main()
{
    //��������
	void input();
	void aver();
	void order();
	void output();
	void out_row();
	struct stu stud[4];  //����ṹ������
	float row[3];
    //��������
	input(stud,4);
	aver(stud,4);
	order(stud,4);
	output(stud,4);
	out_row(stud,4);
}*/

/********************�ṹ��ָ��Ķ��������*********************/
/*
//����ṹ��->����
struct data
{
    int day,year,month;
};
//����ṹ��->ѧ��
struct stu
{
    char name[20];
	long num;
	struct data birthday;
};
//��������ʼ
void main()
{
    struct stu *student;  //�ṹ��ָ���������
	student=(struct stu *)malloc(sizeof(struct stu));  //Ϊָ��������䰲ȫ�ĵ�ַ
	printf("Please_input:name,number,year,month,day\n");
	//�Ӽ��̽���ѧ����Ϣ
	scanf("%s",student->name);
	scanf("%ld",&student->num);
	scanf("%d",&student->birthday.year);
	scanf("%d",&student->birthday.month);
	scanf("%d",&student->birthday.day);
	printf("\nOutput student_information:\n");
	printf("\n%20s%10d%10d//%d//%d\n",student->name,student->num,student->birthday.year,student->birthday.month,student->birthday.day);
}*/

/********************�ṹ������ָ��Ķ��������*********************/

//����ṹ��->����
struct data
{
    int day,year,month;
};
//����ṹ��->ѧ��
struct stu
{
    char name[20];
	long num;
	struct data birthday;
};
//��������ʼ
void main()
{
	int i;  //���ѭ������
	//�ṹ��ָ��������Ķ��弰��ʼ��
	struct stu *p,student[4]={{"yaopeng",8216,1993,2,13},{"yeqiang",8217,1993,4,12},{"goudan",8218,1992,10,12},{"liyong",8219,1994,5,24}};
	p=student;  //ָ��pָ������student
	printf("--------�����ַ�������ṹ������--------\n");  //��ӡ
	printf("No.1ָ�뷨�����\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",(p+i)->name,(p+i)->num,(p+i)->birthday.year,(p+i)->birthday.month,(p+i)->birthday.day);
	printf("No.2ָ�뷨֮����\n");
	for(i=0;i<4;i++,p++)
		printf("%20s%10ld%10d//%d//%d\n",p->name,p->num,p->birthday.year,p->birthday.month,p->birthday.day);
	printf("No.3��ַ����\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",(student+i)->name,(student+i)->num,(student+i)->birthday.year,(student+i)->birthday.month,(student+i)->birthday.day);
	p=student;
	printf("No.4ָ��������������\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",p[i].name,p[i].num,p[i].birthday.year,p[i].birthday.month,p[i].birthday.day);
}