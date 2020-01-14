#include<stdio.h>
int main(void)
{
	int i,j,k,a[5][5],n;
	scanf("%d",&n);
	for(k=1;k<=(n+1)/2;k++)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			if(i<=j)
			a[i][j]=k;
			else
			a[i][j]=k+1;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%4d",a[i][j]);
		printf("\n");
	}
} 
