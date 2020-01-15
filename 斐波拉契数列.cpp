#include<stdio.h>
int main(void)
{
	int f0,f1,t=0;
	while(t<1000)
	{
		t=f0+f1;
		f0=f1;
		f1=t;
	}
	printf("%d\n",t);
} 
