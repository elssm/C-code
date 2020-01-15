#include<stdio.h>
void quicksort(int a[],int m,int n)
{
	if(m<n)
	{
		int i=m,j=n;
		int key=a[i];
		while(i<j)
	{
		while(i<j && a[j]>=key)
			j--;
		if(i<j)
			a[i++]=a[j];
		while(i<j&&a[i]<key)
		i++;
		if(i<j)
			a[j--]=a[i];
	}
		a[i]=key;
		quicksort(a,m,i-1);
		quicksort(a,i+1,n);	
	}
}
void printlink(int a[],int n)
{
	for(int i=0;i<n;i++)
	printf("%3d",a[i]);
}
int main(void)
{
	int a[10]={3,2,5,8,4,7,6,9,0,1};
	quicksort(a,0,9);
	printlink(a,10);
	return 0;
}
