#include<stdio.h>
int main(void)
{
	int a,b,c,k;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
	if(a<b)
	{
		k=a;
		a=b;
		b=k;
	}
	if(a<c)
	{
		k=a;
		a=c;
		c=k;
	}
	if(b<c)
	{
		k=b;
		b=c;
		c=k;
	}
	printf("%d %d %d\n",a,b,c);
}
}
