#include<stdio.h>
int main(void)
{
	int a[3][4];
	int i,j,k,t,m,n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	k=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		if(k<a[i][j])
		{ 
		k=a[i][j];
		m=i;n=j;
		} 
	}
	t=a[m][n];
	a[m][n]=a[2][3];
	a[2][3]=t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
}
