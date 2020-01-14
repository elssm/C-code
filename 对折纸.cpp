#include<stdio.h>
int main(void)
{
	double i=0.2;
	int t=0;
	while(i<=8448000)
	{
		t++;
		i*=2;
	}
	printf("%d\n",t);
} 
