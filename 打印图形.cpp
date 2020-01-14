#include<stdio.h>
int main(void)
{
	int i,j,m,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(m=i;m<k;m++)
		printf("*");
		printf("\n");
		} 
}
