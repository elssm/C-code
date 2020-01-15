#include<stdio.h>
int main(void)
{
	int i,j,sum,t;
	for(i=1;i<30;i++)
	{
		sum=i;t=i;
		{
			for(j=1;j<7;j++)
			{
			t=t+j;
			sum+=t;
		}
		}
		if(sum==105) 
		printf("%d\n",i);
		
	}
}
