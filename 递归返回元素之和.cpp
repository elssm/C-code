#include<stdio.h>
int sum(int a[],int n)
{
	if(!n)
	return 0;
	else
		return a[0]+sum(a+1,n-1);//��һ�ַ��� 
		//return a[n-1]+sum(a,n-1); //�ڶ��ַ��� 
}
int main(void)
{
	int n=5,a[5]={1,2,3,4,5};
	printf("%5d",sum(a,5));
	return 0;
}
