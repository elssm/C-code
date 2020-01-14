#include<stdio.h>
int main(void)
{
	int a[80];
	int i,k,j,t=0;
	scanf("%d",&j);
	for(i=2;i<j;i++)
	{
		for(k=2;i%k;k++)
			;
			if(i==k)
			{
			t++;
			printf("%d\n",i);
		}
	}
		printf("%d\n",t);
}
 
