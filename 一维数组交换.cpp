#include<stdio.h>
int main(void)
{
	int a[10],i,j,min,t;
	for(i=0;i<10;i++)
	scanf("%d,",&a[i]);
	min=a[0];
	for(i=1;i<10;i++)
	if(min>a[i])
	{
		min=a[i];
		j=i;
	}
	printf("最小值下标：%d   元素值：%d\n",j,min);
	t=a[0];
	a[0]=a[j];
	a[j]=t;
	for(i=0;i<9;i++) 
	printf("%d,",a[i]);
	printf("%d",a[9]);
} 
