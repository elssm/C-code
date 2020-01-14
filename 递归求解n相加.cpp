#include<stdio.h>
int sum(int n)
{
	if(!n)
	return 0;
	else
	return sum(n-1)+n;
} 
int main(void)
{
	printf("%5d",sum(5));
}
