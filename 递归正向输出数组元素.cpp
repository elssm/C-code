//正向输出数组所有元素值 
#include<stdio.h>
void printaray(int a[],int n)
{
	if(!n)
	return;
	else
	{
		printf("%5d",a[0]);
		printaray(a+1,n-1); 
	} 
} 
int main(void)
{
	int n=5,a[5]={10,20,30,40,50};
	printaray(a,n);
	return 0;
}
