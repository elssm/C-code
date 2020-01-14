//创建二叉树
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
	//创建根节点 
	c=root=(BTnode *)malloc(sizeof(BTnode));
	root->data=a[0];
	root->left=root->right=NULL;
	//创建根之后的节点 
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
	//分配队列区间
	q=(BTnode **)malloc(100*sizeof(BTnode *)); 
	//根节点入队列 
	rear=(rear+1)%100;
	q[rear]=root;
	//非递归按层输出二叉树 
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
