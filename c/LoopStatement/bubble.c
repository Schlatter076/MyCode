#include <stdio.h>

int i,j,x,n,a[60];  //变量定义

/*void main()
{
    //自小到大冒泡
	printf("请输入n(n<60):");
	scanf("%d",&n);
	printf("请输入%d个数:\n",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);    //循环输入要冒泡的数
	}
	for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
			if(a[j]<a[j-1])
			{
			    x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
			}
	printf("结果：\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");

}*/
void main()
{
    //由大到小冒泡
	printf("请输入n(n<60):");
	scanf("%d",&n);
	printf("请输入%d个数:\n",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);    //循环输入要冒泡的数
	}
	for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
			if(a[j]>a[j-1])
			{
			    x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
			}
	printf("结果：\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n"); 
}