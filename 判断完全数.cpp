#include<stdio.h>
int main(void)
{
	int i,n,s=0;
	while(scanf("%d",&n)!=EOF)
	{
		s=0; 
		for(i=1;i<n;i++)
		if(n%i==0)
		s=s+i;
		if(n==s)
		printf("YES.\n");
		else
		printf("NO.\n");
	}
} 
