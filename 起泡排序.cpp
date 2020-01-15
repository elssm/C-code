#include<stdio.h>
void BubbleSort(int a[],int low,int high)
{
	int i,j,flag=1,t;
		for(i=high;i>0&&flag;i--)
	{
		int flag=0;
	for(j=0;j<i;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		flag=1;
	}
}
}
int main(void)
{
	int i,a[10]={3,2,5,8,4,7,6,9,0,1}; 
	BubbleSort(a,0,9); 
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
}
