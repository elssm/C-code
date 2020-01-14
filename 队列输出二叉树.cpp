//����������
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}BTnode;
BTnode *createBTtree(int a[],int n)
{
	int i=0;
	BTnode *root,*p,*pa,*c;
	//�������ڵ� 
	c=root=(BTnode *)malloc(sizeof(BTnode));
	root->data=a[0];
	root->left=root->right=NULL;
	//������֮��Ľڵ� 
	for(i=1;i<n;i++)
	{
		c=root;
		p=(BTnode *)malloc(sizeof(BTnode));
		p->data=a[i];
		p->left=p->right=NULL;
		while(c){
			pa=c;
			if(pa->data>p->data)
			c=c->left;
			else
			c=c->right;
		}
		if(pa->data>p->data)
		pa->left=p;
		else
		pa->right=p;
	}
	return root;
} 
void levelorder(BTnode *root)
{
	BTnode *p;
	BTnode **q;
	int front=0,rear=0;
	//�����������
	q=(BTnode **)malloc(100*sizeof(BTnode *)); 
	//���ڵ������ 
	rear=(rear+1)%100;
	q[rear]=root;
	//�ǵݹ鰴����������� 
	while(front-rear){
		front=(front+1)%100;
		p=q[front];
		printf("%5d",p->data);
		if(p->left)
		{
			rear=(rear+1)%100;
			q[rear]=p->left; 
		} 
		if(p->right)
		{
			rear=(rear+1)%100;
			q[rear]=p->right;
		}		
	}
	free(q); 	 
} 
int main(void)
{
	BTnode *root;
	int a[8]={3,2,5,8,4,7,6,9};
	root=createBTtree(a,8);
	levelorder(root);
	return 0;
}
