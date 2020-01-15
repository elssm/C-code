#include<stdio.h>
#include<iostream>
typedef struct{
	int s[6];
	int top;
}stack;
push(int a[],int n)
{
	stack *s; 
	int i=0,top=-1;
	while(top<n)
	s[++top]=a[i];
	return top;
}
/*stack push(stack *s,int n)
{
	if(s->top=max-1)
	return error;
	s[++top]=n;
	return ok;
} */
void spop(*s,int top)
{
	while(top!=-1)
	{
		printf("%3d",s[top--]);
	}
	return;
}
int main(void)
{
	int a[5]={3,2,5,8,4};
	s=createstack(a,5);
	spop(s);
	return 0;
}
