#include<stdio.h>
int main(void)
{
	int a[10],i,max1,max2;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max1=a[0];
	 for(i=1;i<10;i++)
	 {
	 	if(a[i]<0&&max1<0&&a[i]>max1)
	 	{
	 		max2=max1;
	 		max1=a[i];
	 	}
	 	else if(a[i]<0&&max1>0)
	 	max1=a[i];
	 	else if(a[i]<0&&max1<0&&a[i]<max1)
	 	max2=a[i];
}
	 printf("max1=%d  max2=%d\n",max1,max2);
}
