#include<stdio.h>
int main(void)
{
	int i,n,a,t=0,s=0;
	scanf("%d %d",&n,&a);
	for(i=0;i<n;i++)
	{
		t=t*10+a;
		s+=t; 
	}
	printf("%d\n",s);
} 
