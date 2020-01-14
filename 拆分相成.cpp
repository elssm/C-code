#include<stdio.h>
int main(void)
{
	int a,t,n;
	scanf("%d",&a);
	for(t=11;t>10;a=t)
	{
		t=1;
	for(n=a;n>0;n/=10)
	{
		if(n%10==0)
		continue;
		else
		t=t*(n%10);
	}
}
	printf("%d\n",t);
} 
