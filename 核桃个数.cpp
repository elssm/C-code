#include<stdio.h>
int main(void)
{
	int a,b,c,i=1;
	scanf("%d %d %d",&a,&b,&c);
	while(1)
	{
		if(i%a==0&&i%b==0&&i%c==0)
		break;
		else
		i++;
	}
	printf("%d\n",i);
} 
