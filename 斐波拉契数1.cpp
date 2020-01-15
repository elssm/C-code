#include<stdio.h>
int main(void)
{
	int a=0,b=1,i,n;
	printf("ÇëÊäÈëµÚnÎ»£º"); 
	scanf("%d",&n);
	if(n==1)
		printf("%d\n",n-1);
	else
	{
		for(i=0;i<n-2;i++)
	{
		b=a+b;
		a=b-a;
	}
		printf("%d\n",b);
	}
}
