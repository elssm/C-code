#include<stdio.h>
int main(void)
{
	int n,i,j,t,s=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum+=j;
			if(sum==n)
			{
				s++;	
				printf("%d=",n);
			for(t=i;t<j;t++)
			printf("%d+",t);
			printf("%d\n",j);
			}
		}
	}
	if(s==0)
	printf("NONE");
}
