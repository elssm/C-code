#include<stdio.h>
#include<math.h>
int main(void)
{
	double a[10]={95.0,89.0,76.0,65.0,88.0,72.0,85.0,81.0,90.0,56.0};
	double sum=0.0,s=0.0;
	int i,j;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	j=sum/10.0;
	for(i=0;i<10;i++)
	s=s+pow(a[i]-j,2)/10;
	printf("s=%lf\n",s);
		
}
