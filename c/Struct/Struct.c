#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/********************结构体数组的定义和引用*********************/
/*
//结构体类型定义
struct stu
{
    char name[20];   //姓名
	long number;     //学号
	float score[4];  //成绩
};  //结构体定义最后以';'结尾
//信息录入函数
void input(struct stu arr[],int n)
{
    int i,j;
	char temp[30];
	for(i=0;i<n;i++) {
	    printf("\nplease enter name,number,english,math,pyisic\n");
		gets(arr[i].name);  //输入姓名
		gets(temp);
		arr[i].number=atol(temp);  //输入学号 
		for(j=0;j<3;j++) {
		    gets(temp);  //输入三科成绩
			arr[i].score[j]=atof(temp);
		}
	}
}
//求成绩平均值函数
void aver(struct stu arr[],int n)
{
    int i,j;
	//n个学生
	for(i=0;i<n;i++) {
		arr[i].score[3]=0;
		//三科成绩
		for(j=0;j<3;j++) 
			arr[i].score[3]=arr[i].score[3]+arr[i].score[j];
		arr[i].score[3]/=3;
	}
}
//按平均成绩排序/冒泡
void order(struct stu arr[],int n)
{
    struct stu temp;
	int i,j;
	//冒泡法
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			//比较各学生的平均成绩
			if(arr[j].score[3]>arr[j+1].score[3])
			{
			    temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

}
//按要求输出
void output(struct stu arr[],int n)
{
    int i,j;
	printf("*********************************TABLE*********************************\n");  //打印表头
	printf("----------------------------------------------------------------\n");
	printf("|%10s|%8s|%7s|%7s|%7s|%7s|\n","Name","Number","English","Mathema","Phisics","Average");
	printf("----------------------------------------------------------------\n");
	for(i=0;i<n;i++) {
		printf("|%10s|%8ld|",arr[i].name,arr[i].number);  //输出姓名、学号
		for(j=0;j<4;j++)
			printf("|%7.2f",arr[i].score[j]);  //输出三科成绩及平均成绩
		printf("\n");
		printf("----------------------------------------------------------------\n");
	}
}
//按组内求各学生平均成绩
void out_row(struct stu arr[],int n)
{
	float row[4]={0,0,0,0};  //定义存放单项平均的一维数组
	int i,j;
	for(i=0;i<4;i++) {
		for(j=0;j<n;j++)
			row[i]=row[i]+arr[j].score[i];  //计算单项总和
		row[i]/=n;  //计算平均值
	}
	printf("|%19c|",' ');  //按表格形式输出
	for(i=0;i<4;i++)
		printf("%7.2f|",row[i]);
	printf("\n----------------------------------------------------------------\n");
}
//主函数开始
void main()
{
    //函数声明
	void input();
	void aver();
	void order();
	void output();
	void out_row();
	struct stu stud[4];  //定义结构体数组
	float row[3];
    //函数调用
	input(stud,4);
	aver(stud,4);
	order(stud,4);
	output(stud,4);
	out_row(stud,4);
}*/

/********************结构体指针的定义和引用*********************/
/*
//定义结构体->日期
struct data
{
    int day,year,month;
};
//定义结构体->学生
struct stu
{
    char name[20];
	long num;
	struct data birthday;
};
//主函数开始
void main()
{
    struct stu *student;  //结构体指针变量定义
	student=(struct stu *)malloc(sizeof(struct stu));  //为指针变量分配安全的地址
	printf("Please_input:name,number,year,month,day\n");
	//从键盘接收学生信息
	scanf("%s",student->name);
	scanf("%ld",&student->num);
	scanf("%d",&student->birthday.year);
	scanf("%d",&student->birthday.month);
	scanf("%d",&student->birthday.day);
	printf("\nOutput student_information:\n");
	printf("\n%20s%10d%10d//%d//%d\n",student->name,student->num,student->birthday.year,student->birthday.month,student->birthday.day);
}*/

/********************结构体数组指针的定义和引用*********************/

//定义结构体->日期
struct data
{
    int day,year,month;
};
//定义结构体->学生
struct stu
{
    char name[20];
	long num;
	struct data birthday;
};
//主函数开始
void main()
{
	int i;  //输出循环变量
	//结构体指针与数组的定义及初始化
	struct stu *p,student[4]={{"yaopeng",8216,1993,2,13},{"yeqiang",8217,1993,4,12},{"goudan",8218,1992,10,12},{"liyong",8219,1994,5,24}};
	p=student;  //指针p指向数组student
	printf("--------用四种方法输出结构体数组--------\n");  //打印
	printf("No.1指针法输出：\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",(p+i)->name,(p+i)->num,(p+i)->birthday.year,(p+i)->birthday.month,(p+i)->birthday.day);
	printf("No.2指针法之二：\n");
	for(i=0;i<4;i++,p++)
		printf("%20s%10ld%10d//%d//%d\n",p->name,p->num,p->birthday.year,p->birthday.month,p->birthday.day);
	printf("No.3地址法：\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",(student+i)->name,(student+i)->num,(student+i)->birthday.year,(student+i)->birthday.month,(student+i)->birthday.day);
	p=student;
	printf("No.4指针数组描述法：\n");
	for(i=0;i<4;i++)
		printf("%20s%10ld%10d//%d//%d\n",p[i].name,p[i].num,p[i].birthday.year,p[i].birthday.month,p[i].birthday.day);
}