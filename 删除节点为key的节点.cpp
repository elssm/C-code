//删除链表值为key的结点 
#include<iostream> 
#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
	int data;
	struct node * next;
}ElemSN;
ElemSN *Createlink(int a[],int n)//创建单向链表 
{
	ElemSN *h=NULL,*t,*p;
	for(int i=0;i<n;i++)
	{
		p=(ElemSN*)malloc(sizeof(ElemSN));
		p->data=a[i];
		p->next=NULL;
		if(!h)
		h=t=p;
		else
		t=t->next=p;
	}
	return h;
}
void printflink(ElemSN *h)//输出链表 
{
	ElemSN *p;
	for(p=h;p;p=p->next)
	{
		printf("%5d",p->data);
	}
}
ElemSN *DelSameNode(ElemSN *h,int key)//寻找值为key的结点 
{
	ElemSN *p,*q;
	p=h;
	while(p){
		if(p->data-key)
		{
			q=p;
			p=p->next;
		}
	else 
			if(p-h)
			{
				q->next=p->next;
				free(p);
				p=q->next;
			}
			else
			{
				h=h->next;
				free(p);
				p=h;
			}
		}
	return h;
}
int main(void)
{
	int a[6]={3,2,2,8,2,7};
	int key;
	ElemSN *head,*pkey;
	head=Createlink(a,6);
	head=DelSameNode(head,2);
	printflink(head);
	return 0; 
}
