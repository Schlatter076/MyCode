#include <stdio.h>
#include <conio.h>

//��ָ�������ֵ����
/*
void main() {
    int n1,n2,n3;
	int *p1,*p2,*p3;   //��������ָ�����
	//scanf("%d,%d,%d",&n1,&n2,&n3); 
	printf("������������:");
	scanf("%d",&n1);     //��������һ��������벻�У�
	scanf("%d",&n2);
	scanf("%d",&n3);
	p1=&n1;   //p1ָ��n1
	p2=&n2;
	p3=&n3;
	if(n1>n2) swap(p1,p2);
	if(n1>n3) swap(p1,p3);
	if(n2>n3) swap(p2,p3);
	printf("��С��������:%d,%d,%d",n1,n2,n3);
	getch();

}
//��������
int swap(int *p_1,int *p_2){
    int t;
	t=*p_1;
	*p_1=*p_2;
	*p_2=t;
}*/

//void���͵�ָ��
//ǿ��ת����������
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

//ָ��������
/*
void main() {

	float a[5]={1,2,3,4,5},*p;
	int i;
	p=a;      //��һ�ַ������ָ��p
	for(i=0;i<5;i++) {
		//p=&a[i];    //�ڶ��ַ������ָ��p��ֵ
	    printf("\nDS:%X,a[%d]=%f,*p=%f",&a[i],i,a[i],*(p+i));   //��ע�͵�����ӦΪ*(p+i)-->*p
	}
	getch();
}*/

//�ҳ�����������Ԫ�أ�����¼�±�
/*
void main() {
    int *max();  //��������
	int n,a[10],*s,i;
	printf("����������a[10]��ֵ:\n");
	for(i=0;i<10;i++) 
	    scanf("%d",a+i);
	s=max(a,10);
	printf("max=%d,index=%d\n",*s,s-a);
}
int *max(int *a,int n) {  
    int *p,*t;  //p�����������飬t������¼
	for(p=a,t=a;p-a<n;p++) {
	   if(*p>*t)  t=p; 
	}
	return t;
}*/

//��ָ��ʵ��ð������
//�ֺ���д��
/*
#define N 10
void main() {
    void INput();
	void sort();
	void OUTput();  //��������
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

//��ָ��ʵ��ð������

#define N 10
void main()
{
    int a[N],*p,i,j,t,*p1;
	printf("����������a��Ԫ��(10��)\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	p=a;  //ָ��pָ������a
	printf("......����ð����......\n");
	for(i=0;i<N;i++)  //��ʼ����
		for(j=0;j<N-i-1;j++)  //Ԫ�شӺ���ǰ���μ�С
			if(*(p+j)>*(p+j+1))  //�Ƚ�������λ��С
			{
			     t=*(p+j);
				 *(p+j)=*(p+j+1);
				 *(p+j+1)=t;      //��������Ԫ��ֵ
			}
	printf("���:\n");
	for(p=a;p-a<N;p++)
		printf("%d  ",*p);
	printf("\n");
	p1=a;
	printf("......����ð����......\n");
	for(i=0;i<N;i++)  //��ʼ����
		for(j=0;j<N-i-1;j++)  //Ԫ�شӺ���ǰ���μ�С
			if(*(p1+j)<*(p1+j+1))  //�Ƚ�������λ��С
			{
			     t=*(p1+j);
				 *(p1+j)=*(p1+j+1);
				 *(p1+j+1)=t;      //��������Ԫ��ֵ
			}
	printf("���:\n");
	for(p1=a;p1-a<N;p1++)
		printf("%d  ",*p1);
	printf("\n");
}