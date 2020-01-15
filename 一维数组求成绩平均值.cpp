#include<stdio.h>
int main(void)
{
	int a[10],sum=0,t;
	int i,j;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	t=a[0];
	for(i=1;i<10;i++)
	if(a[i]>a[0])
	{
		a[0]=a[i];
		j=i;
	}
	printf("%d %d\n",j+1,a[0]);
	for(i=0;i<10;i++)
	sum+=a[i];
	printf("%f",sum/10.0);
} 
