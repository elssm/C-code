#include<stdio.h>
int main(void)
{
	int a[10]={0,2,5,8,4,7,6,9,1,10};
	int i,j,key;
	for(i=1;i<10;i++)
	{
		key=a[i];
		j=i-1;
		while((j>=0)&&(a[j]>key)){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(i=0;i<10;i++)
	printf("%5d",a[i]); 
}
