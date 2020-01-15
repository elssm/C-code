#include<stdio.h>
void shellSort(int a[],int n)
{
	int j,gap;	
	for (gap=n/2;gap>0;gap/= 2)
		for(j=gap;j<n;j++)
			if(a[j]<a[j-gap])
			{
				int temp=a[j];
				int k=j-gap;
				while(k>=0 && a[k]>temp)
				{
					a[k+gap]=a[k];
					k-=gap;
				}
				a[k+gap]=temp;
			}
}
int main()
{
	int i,a[10]={3,2,5,8,4,7,6,9,0,1};
	shellSort(a,10);
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
} 
