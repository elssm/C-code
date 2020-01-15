#include<stdio.h>
int main(void)
{
	int a[100],i,t,j,s;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=0)
		break;
	}
	s=a[0];
	for(t=1;t<i;t++)
	{
		if(s>a[t])
		{
			j=s;
			s=a[t];
			a[t]=j;
		}
	}
	printf("%d\n",s);
} 
