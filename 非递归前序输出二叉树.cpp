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
void Postnode(BTnode *root)
{
	BTnode **s;
	BTnode *p;
	int top=-1;
//分配栈区间
s=(BTnode **)malloc(100*sizeof(BTnode *));
//初始化 根节点入栈
s[++top]=root; 
//非递归前序
while(top!=-1)
{
	p=s[top--];
	printf("%5d",p->data);
	if(p->right)
	s[++top]=p->right;
	if(p->left)
	s[++top]=p->left;
} 	
free(s); 
} 
int main(void)
{
	BTnode *root;
	int a[8]={3,2,5,8,4,7,6,9};
	root=createBTtree(a,8);
	Postnode(root);
	return 0;
}
