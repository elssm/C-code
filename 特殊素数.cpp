#include<stdio.h>
int main(void)
{
	int n,a[10],i,j,t,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=2;a[i]%j;j++)
			;
			if(a[i]!=j)
			printf("%d不是素数\n",a[i]);
			else
			{
				for(j=a[i];j>0;j/=10)
				t=t*10+j%10;
				for(k=2;t%k;k++)
			;
			if(t==k)
			printf("%d是可逆素数\n",a[i]);
			else
			printf("%d是素数，但不是可逆素数\n",a[i]);
			}
	}
	
} 
