#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,n,a,b,c,d,k;
	scanf("%d %d %d",&n,&i,&j);
	a=(i-1)/n;
	if(a%2==0)
	b=(i-1)%n;
	else
	b=(n-1)-(i-1)%n;
	c=(j-1)/n;
	if(c%2==0)
	d=(j-1)%n;
	else
	d=(n-1)-(j-1)%n;
	k=fabs(a-c)+fabs(b-d);
	printf("%d\n",k);
} 

