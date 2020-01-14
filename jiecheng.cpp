#include<stdio.h>
int main(void)
{
	int i,t=1,s=0,n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		t*=i;
		s+=t;
	}
	printf("%d\n",s);
} 
