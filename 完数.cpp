#include<stdio.h>
int main(void)
{
	int i,sum,s;
	for(i=3;i<=1000;i++)
	{
		for(s=1;s<i;s++)
		if(i%s==0)
		sum+=s;
		if(sum==i)
		printf("%d\n",i);
		sum=0;
	}
} 
