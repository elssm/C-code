#include<stdio.h>
int main(void)
{
	int a[9],i,j=0;
	for(i=0;i<9;i++)
	scanf("%d",&a[i]);
	for(i=1;i<9;i++)
	{
		if(a[i]!=a[i-1])
		{
			j++;
			a[j]=a[i];
		}
	}
	for(i=0;i<j+1;i++)
	printf("%3d",a[i]);
} 
