#include<stdio.h>
int main(void)
{
	int n;
	double t,m=0;
	while(scanf("%d",&n)!=EOF)
	{
		m=0;
		for(t=1;t<n+1;t++)
			m=m+1/t;
			printf("%6.2lf\n",m);
	}
} 
