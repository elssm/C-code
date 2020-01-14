#include<stdio.h>
int main(void)
{
	int sum=0;
	for(int i=1;i<=1024;sum+=i++);
	printf("%5d",sum); 
}
