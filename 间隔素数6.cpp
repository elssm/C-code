#include<stdio.h>
int main(void)
{
	int i,x,y,t;
	scanf("%d%d",&x,&y);
	for(i=x;i<y+1;i++)
	{
	for(t=2;i%t;t++)
		;
		if(i==t)
		printf("%d ",i);
	}
}
