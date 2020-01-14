#include<stdio.h>
int main(void)
{
	int i,t;
	for(i=1000;i>99;i--)
	{
		for(t=2;i%t;t++)
		;
		if(i==t)
		printf("%d\n",i);
	}	
}
