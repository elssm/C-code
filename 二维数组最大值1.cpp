#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[3][4],i,j,m,x,y;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	m=fabs(a[2][3]);
	for(i=2;i>=0;i--)
	{
		for(j=3;j>=0;j--)
		{
		if(fabs(a[i][j])>=m)
		{
		m=fabs(a[i][j]);
		x=i+1;
		y=j+1;
	}
	} 
}
	printf("%d %d %d",m,x,y);
}

