#include<stdio.h>
int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i,j,k;
	i=0;j=9;
	while(i<j)
	{
		k=a[i];
		a[i]=a[j];
		a[j]=k;
		i++;
		j--;
	}
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
}
