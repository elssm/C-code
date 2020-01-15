#include<stdio.h>
void fun()
{
	int i,j,sum;
	for(j=2;j<1001;j++)
	{
		sum=0;
	for(i=1;i<j;i++)
		if(!(j%i))
		sum+=i;
		if(sum==i)
		printf("%5d",j);
	}
}
int main(void)
{
	fun();
}
