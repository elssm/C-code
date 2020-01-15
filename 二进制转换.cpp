#include<stdio.h>
int main(void)
{
	int m,a[32]={0},i;
	scanf("%d",&m);
 	for(i=31;i>=0;i--,m>>=1)
	a[i]=(01&m);
	for(i=0;i<32;i++)
	printf("%d",a[i]);
} 
