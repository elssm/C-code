#include<stdio.h>
void InsertSort(int a[], int n)
{
	int i,j;
	for(i=1;i<n;i++)
		if(a[i]<a[i-1])
		{
			int temp=a[i];
			for(j=i-1;j>=0 && a[j]>temp;j--)
				a[j+1]=a[j];
			a[j+1]=temp;
		}
}
int main(void)
{
	int i,a[10]={3,2,5,8,4,7,6,9,0,1};
	InsertSort(a,10);
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
}
