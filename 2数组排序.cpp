#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[5]={1,1,2,3,5};
	int b[6]={2,4,5,5,6,7};
	int c[11]={0};
	int i=0,j=0,t,k=0;
	while(i<5)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else
		c[k++]=b[j++];
	}
	while(j<6)
	{
		c[k++]=b[j++];
	}
	for(i=0;i<11;i++)
	{
	 printf("%5d",c[i]);
	}
}


