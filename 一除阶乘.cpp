#include<stdio.h>
int main(void)
{
	int n,i;
	double sum=0.0,t=1.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t=t*(i+1);
		sum+=(1/t);
	}
	printf("%.3lf",sum);
} 
