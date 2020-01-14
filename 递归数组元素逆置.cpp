//µİ¹éÊı×éÔªËØÄæÖÃ
#include<stdio.h>
void exchange(int a[],int n)
{
	int t;
	if(n==0||n==1)
	return 0;
	if(n>1)
	{
		t=a[0];
		a[0]=a[n-1];
		a[n-1]=t;
		exchange(a+1,n-2); 
	}
} 
