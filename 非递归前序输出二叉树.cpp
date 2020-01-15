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
void Postnode(BTnode *root)
{
	BTnode **s;
	BTnode *p;
	int top=-1;
//����ջ����
s=(BTnode **)malloc(100*sizeof(BTnode *));
//��ʼ�� ���ڵ���ջ
s[++top]=root; 
//�ǵݹ�ǰ��
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
