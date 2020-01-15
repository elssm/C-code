#include<stdio.h>
int main(void)
{
	int a[10];
	int i,j,t,flag=1;
	for(i=0;i<10;i++)//接受参数 
	scanf("%d",&a[i]);
	for(i=9;i>0&&flag;i--)
	{
		flag=0;
	for(j=0;j<i;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j]=a[j+1];
		flag=1;
	}
}
for(i=0;i<10;i++)
printf("%5d",a[i]);
	
} 
