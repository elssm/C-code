#include<stdio.h>
int main(void)
{
	int i,j,t=0;
	for(i=3;i<200;i+=2)
	{
		for(j=2;i%j;j++)
			;
			if(i==j)
			t++;
			if(t==2)
			{
			t=0;
			printf("%d %d\n",i-2,i);
	}
}
} 
