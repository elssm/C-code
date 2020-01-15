#include<stdio.h>
void selectSort(int a[],int s){
	int i,j,t;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
} 
int main(void)
{
	int i,a[10]={3,2,5,8,4,7,6,9,0,1};
	selectSort(a,10);
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
}
