//对一个数组所有元素进行求和 
#include<stdio.h>
int sum(int *start,int *end)
{
	int total=0;
	while(start<end)
	{
		total+=*start;
		start++;
	}
	return total;
} 
int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int k;
	k=sum(a,a+10);
	printf("%5d",k);
	return 0;
}
