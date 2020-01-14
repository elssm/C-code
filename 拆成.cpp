#include<stdio.h>
int main(void)
{
	int a,t=1,n;
	scanf("%d",&a);
	for(n=a;n>0;n/=10)
	{
		if(n%10==0)
		continue;
		else
		t=t*(n%10);
	}
	printf("%d\n",t);
}
