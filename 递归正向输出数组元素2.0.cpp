#include<stdio.h>
void printaray(int a[],int n)
{
	if(n)
	{
		printaray(a,n-1); 
		printf("%3d",a[n-1]);
	}
} 
int main(void)
{
	int n=5,a[5]={10,20,30,40,50};
	printaray(a,5);
	return 0;
}
