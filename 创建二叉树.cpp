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
void Forder(BTnode *root)//ǰ����� 
{
	if(root)  
	{

		printf("%4d",root->data);
		Forder(root->left);
		Forder(root->right);
	}
}
void Inorder(BTnode *root)//������� 
{
	if(root)  
	{
		Inorder(root->left);
		printf("%4d",root->data);
		Inorder(root->right);
	}
}
void Porder(BTnode *root)//������� 
{
	if(root)  
	{
		Porder(root->left);
		Porder(root->right);
		printf("%4d",root->data);
	}
}
int main(void)
{ 
	BTnode * root;
	int a[10]={3,2,5,8,4,7,6,9,0,1};
	root=createBTtree(a,10);
	Forder(root);
	printf("\n");
	Inorder(root);
	printf("\n");
	Porder(root); 
	printf("\n");  
	return 0;
}
