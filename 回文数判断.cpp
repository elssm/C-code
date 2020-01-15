#include<stdio.h>
int main(void)
{
	int i,j,t=0,n;
	scanf("%d",&i);
	for(n=i;n>0;n/=10)
	t=t*10+n%10;
	if(i==t)
	printf("yes\n");
	else
	printf("no\n");
	
} 
