#include<stdio.h>
int main(void)
{
	int k,n,t=0;
	while(scanf("%d",&k)!=EOF)
	{
		t=0;
		for(n=k;n>=1;n/=10)
	t=t*10+n%10;
	if(t==k)
	printf("YES\n");
	else
	printf("NO\n");
	} 
} 
