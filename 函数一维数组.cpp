#include<stdio.h>
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main(void)
{
	int i,m,a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	m=a[0];
	for(i=1;i<10;i++)
	m=max(m,a[i]); 
	printf("%d\n",m);
}
