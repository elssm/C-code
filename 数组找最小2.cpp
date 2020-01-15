#include<stdio.h>
int main(void)
{
	int min,n;
	scanf("%d",&n);
	min=n;
	while(1)
	{ 
		scanf("%d",&n);
		if(n==-1)
		break;
		else
		if(min>n)
		min=n;	
	}
	printf("%d\n",min);
}
