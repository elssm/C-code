#include<stdio.h>
int main(void)
{
	double a,t=0.0,i;
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		t=1/(1+(1/a));
		a=t;
	}
	printf("%lf\n",t);
} 
