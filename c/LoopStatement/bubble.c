#include <stdio.h>

int i,j,x,n,a[60];  //��������

/*void main()
{
    //��С����ð��
	printf("������n(n<60):");
	scanf("%d",&n);
	printf("������%d����:\n",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);    //ѭ������Ҫð�ݵ���
	}
	for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
			if(a[j]<a[j-1])
			{
			    x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
			}
	printf("�����\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");

}*/
void main()
{
    //�ɴ�Сð��
	printf("������n(n<60):");
	scanf("%d",&n);
	printf("������%d����:\n",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);    //ѭ������Ҫð�ݵ���
	}
	for(i=1;i<n;i++)
		for(j=n-1;j>=i;j--)
			if(a[j]>a[j-1])
			{
			    x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
			}
	printf("�����\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n"); 
}