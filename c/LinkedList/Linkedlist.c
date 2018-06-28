#include <stdio.h>
#include <stdlib.h>

/*************************单链表的创建与输出******************************/

//例:建一个存放正整数（输出-999结束）的单链表，并输出打印
//链表节点结构体
struct node
{
    int num;
	struct node *next;  //指向同类型结构的指针变量
};
//主函数开始
void main()
{
    //函数声明
	struct node *creat();
	void print();
	struct node *head;  //定义头指针
	head=NULL;  //建一个空表
	head=creat(head);
	print(head);
}
//建表函数,返回与节点相同类型的指针
struct node *creat(struct node *head)
{
    struct node *p1,*p2;
	//申请新节点
	p1=p2=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&p1->num);  //输入节点的值
	p1->next=NULL;  //将新节点的指针置为空
	while(p1->num >0)   //输入节点值大于零
	{
	    if(head=NULL) head=p1;  //空表，接入表头
		else p2->next=p1;  //非空表，接入表尾
		p2=p1;
		p1=(struct node *)malloc(sizeof(struct node));  //申请下一个新节点
		scanf("%d",&p1->num);  //输入节点值
	}
	return head;  //返回链表的头指针
}
//输出以head为头的链表各节点值
void print(struct node *head)
{
    struct node *temp;
	temp=head;  //取链表头指针
	while(temp!=NULL)  //只要是非空表
	{
		printf("%6d",temp->num);  //打印节点值
		temp=temp->next;  //跟踪链表增长
	}
}

/*************************单链表的插入与删除******************************/

