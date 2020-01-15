#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main(void)
{
	int m,line,i,j;
	printf("please input the line number:");
	scanf("%d",&m);
	srand((unsigned)time(NULL));
	for(i=0;i<m;i++)
	{
		line=rand()%10+1;
		for(j=0;j<line;j++)
		printf("*");
		printf("\n"); 
	}
} 
