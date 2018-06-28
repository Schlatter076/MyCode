#include <stdio.h>
#include <conio.h>

//用指针完成数值排序
/*
void main() {
    int n1,n2,n3;
	int *p1,*p2,*p3;   //定义三个指针变量
	//scanf("%d,%d,%d",&n1,&n2,&n3); 
	printf("请输入三个数:");
	scanf("%d",&n1);     //三个数用一个语句输入不行？
	scanf("%d",&n2);
	scanf("%d",&n3);
	p1=&n1;   //p1指向n1
	p2=&n2;
	p3=&n3;
	if(n1>n2) swap(p1,p2);
	if(n1>n3) swap(p1,p3);
	if(n2>n3) swap(p2,p3);
	printf("从小到大排列:%d,%d,%d",n1,n2,n3);
	getch();

}
//交换函数
int swap(int *p_1,int *p_2){
    int t;
	t=*p_1;
	*p_1=*p_2;
	*p_2=t;
}*/

//void类型的指针
//强制转换变量类型
/*
void half(void *p,char type);
int main(void) {
	int i=10;
	long l=100000;
	float f=1.023;
	double d=3.141592;
	printf("\n%d",i);
	printf("\n%ld",l);
	printf("\n%f",f);
	printf("\n%lf\n\n",d);
	half(&i,'i');
	half(&l,'l');
	half(&f,'f');
	half(&d,'d');
	printf("\n%d,\n%ld,\n%f,\n%lf\n",i,l,f,d);
	//return 0;
	getch();
}
void half(void *p,char type) {

	switch(type) {

	    case 'i':
		    {
		       *((int *)p)/=2;
		    }break;
        case 'l':
		    {
			    *((long *)p)/=2;
		    }break;
		case 'f':
			{
			   *((float *)p)/=2;
			}break;
		case 'd':
			{
			    *((double *)p)/=2;
			}break;

	}
}*/

//指针与数组
/*
void main() {

	float a[5]={1,2,3,4,5},*p;
	int i;
	p=a;      //第一种方法输出指针p
	for(i=0;i<5;i++) {
		//p=&a[i];    //第二种方法输出指针p的值
	    printf("\nDS:%X,a[%d]=%f,*p=%f",&a[i],i,a[i],*(p+i));   //与注释掉语句对应为*(p+i)-->*p
	}
	getch();
}*/

//找出数组里最大的元素，并记录下标
/*
void main() {
    int *max();  //函数声明
	int n,a[10],*s,i;
	printf("请输入数组a[10]的值:\n");
	for(i=0;i<10;i++) 
	    scanf("%d",a+i);
	s=max(a,10);
	printf("max=%d,index=%d\n",*s,s-a);
}
int *max(int *a,int n) {  
    int *p,*t;  //p用来跟踪数组，t用来记录
	for(p=a,t=a;p-a<n;p++) {
	   if(*p>*t)  t=p; 
	}
	return t;
}*/

//用指针实现冒泡排序
//分函数写法
/*
#define N 10
void main() {
    void INput();
	void sort();
	void OUTput();  //函数声明
	int a[N],*ptr;
	INput(a,N);
	ptr=a;
	sort(ptr,N);
	OUTput(ptr,N);
}
void INput(int arr[],int n) {
    int i;
	printf("Please enter arr[]_DATA:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void sort(int *p,int n) 
{
    int i,j,t;
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n-i-1;j++) 
		{
			if(*(p+j)>*(p+j+1)) 
			{
			    t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
void OUTput(int arr[],int n)
{
    int i,*p;
	p=arr;
	printf("Output data:\n");
	for(;p-arr<n;p++)
		printf("%4d",*p);
	printf("\n");
}*/

//用指针实现冒泡排序

#define N 10
void main()
{
    int a[N],*p,i,j,t,*p1;
	printf("请输入数组a的元素(10个)\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	p=a;  //指针p指向数组a
	printf("......正向冒泡中......\n");
	for(i=0;i<N;i++)  //开始排序
		for(j=0;j<N-i-1;j++)  //元素从后往前依次减小
			if(*(p+j)>*(p+j+1))  //比较相邻两位大小
			{
			     t=*(p+j);
				 *(p+j)=*(p+j+1);
				 *(p+j+1)=t;      //交换两个元素值
			}
	printf("结果:\n");
	for(p=a;p-a<N;p++)
		printf("%d  ",*p);
	printf("\n");
	p1=a;
	printf("......反向冒泡中......\n");
	for(i=0;i<N;i++)  //开始排序
		for(j=0;j<N-i-1;j++)  //元素从后往前依次减小
			if(*(p1+j)<*(p1+j+1))  //比较相邻两位大小
			{
			     t=*(p1+j);
				 *(p1+j)=*(p1+j+1);
				 *(p1+j+1)=t;      //交换两个元素值
			}
	printf("结果:\n");
	for(p1=a;p1-a<N;p1++)
		printf("%d  ",*p1);
	printf("\n");
}