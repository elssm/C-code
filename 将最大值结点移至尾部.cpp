//将最大值节点移至尾部 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node * next;
}ElemSN;
ElemSN *Createlink(int a[],int n)
{
	ElemSN *h=NULL,*tail,*p;
	for(int i=0;i<n;i++)
	{
		p=(ElemSN*)malloc(sizeof(ElemSN));
		p->data=a[i];
		p->next=NULL;
		if(!h)
		h=tail=p;
		else
		tail=tail->next=p; 
	}
	return h;
} 
void printflink(ElemSN *h)
{
	ElemSN *p;
	for(p=h;p;p=p->next)
	printf("%5d",p->data);
}
ElemSN *MoveMaxNodeToTail(ElemSN *h)
{
	ElemSN *p,*q,*qmax,*pmax;
	pmax=h;
	for(q=h,p=h->next;p;q=p,p=p->next)
	if(p->data>pmax->data)
	{
		pmax=p;
		qmax=q;
	}
	if(pmax->next)
	{
		if(pmax-h)
		qmax->next=pmax->next;
		else
		h=h->next;
		pmax->next=q->next;
		q->next=pmax; 
	}
	return h;
}
int main(void)
{
	int a[6]={3,2,5,8,4,7};
	ElemSN *head,*pkey;
	head=Createlink(a,6);
	head=MoveMaxNodeToTail(head);
	printflink(head);
} 
