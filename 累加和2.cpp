#include<stdio.h>
int main(void)
{
	int sum=0,a,b=0;
	scanf("%d",&a);
	while(a!=-1)
	{
		sum+=a;
		b++;
		scanf("%d",&a);
	}
	printf("%d  %.2lf\n",sum,1.0*sum/b);
}
