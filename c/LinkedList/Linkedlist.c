#include <stdio.h>
#include <stdlib.h>

/*************************������Ĵ��������******************************/

//��:��һ����������������-999�������ĵ������������ӡ
//����ڵ�ṹ��
struct node
{
    int num;
	struct node *next;  //ָ��ͬ���ͽṹ��ָ�����
};
//��������ʼ
void main()
{
    //��������
	struct node *creat();
	void print();
	struct node *head;  //����ͷָ��
	head=NULL;  //��һ���ձ�
	head=creat(head);
	print(head);
}
//������,������ڵ���ͬ���͵�ָ��
struct node *creat(struct node *head)
{
    struct node *p1,*p2;
	//�����½ڵ�
	p1=p2=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&p1->num);  //����ڵ��ֵ
	p1->next=NULL;  //���½ڵ��ָ����Ϊ��
	while(p1->num >0)   //����ڵ�ֵ������
	{
	    if(head=NULL) head=p1;  //�ձ������ͷ
		else p2->next=p1;  //�ǿձ������β
		p2=p1;
		p1=(struct node *)malloc(sizeof(struct node));  //������һ���½ڵ�
		scanf("%d",&p1->num);  //����ڵ�ֵ
	}
	return head;  //���������ͷָ��
}
//�����headΪͷ��������ڵ�ֵ
void print(struct node *head)
{
    struct node *temp;
	temp=head;  //ȡ����ͷָ��
	while(temp!=NULL)  //ֻҪ�Ƿǿձ�
	{
		printf("%6d",temp->num);  //��ӡ�ڵ�ֵ
		temp=temp->next;  //������������
	}
}

/*************************������Ĳ�����ɾ��******************************/

