#include<stdio.h>
void insertSort(int a[],int s){
	int i,j,k,t;
		for(i=1;i<s;i++)
	{
		j=0;
		while(a[j]<a[i]&&(j<i))
		j++;
		if(i!=j)
		{
			t=a[i];
			for(k=i;k>j;k--)
			a[k]=a[k-1];
			a[j]=t;
		}
	}
} 
int main(void)
{
	int i,a[10]={3,2,5,8,4,7,6,9,0,1};
	insertSort(a,10);
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
}
