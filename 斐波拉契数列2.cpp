#include<stdio.h>
int fun(int n)
{
	if(n<=1)
		return n;
	else
		return fun(n-1)+fun(n-2);
}

int main()
{
	int n,i;
	printf("������Ҫ���������쳲��������У�");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",fun(i));
	}
}
