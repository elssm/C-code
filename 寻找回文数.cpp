#include<stdio.h>
int main(void)
{
	int i,n,t=0;
	for(i=100;i<10000;i++)
	{
		t=0;
		for(n=i;n>0;n/=10)
		t=t*10+n%10;
		if(t==i)
		printf("%d\n",i);
	}
}
