#include<stdio.h>
#include<math.h>
int main(void)
{
	int cnt=0,i,j,min,max;
	int sum=0;
	while(scanf("%d",&i)!=EOF)
	{
		cnt++;
		if(!(cnt-1)||max<i) max=i;
		if(!(cnt-1)||min>i) min=i;
		sum+=i;
	}
	printf("max=%d,min=%d,average=%lf",max,min,sum/(double)cnt);
	return 0;
	} 

