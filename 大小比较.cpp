#include<stdio.h>
int main(void)
{
	int a[10]={2,5,15,46,88,74,23,20,69,51};
	int i,j,t;
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
