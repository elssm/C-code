#include<stdio.h>
int main(void)
{
   int  a[7][7]={0},i=0,j,k=0,n;
   for(n=0;n<4;n++)
   {
   	for(j=n;j<7-n;j++)
   	{
   		++k;a[i][j]=k;
	}
	--j;
	for(i=n+1;i<7-n;i++)
	{
		++k;a[i][j]=k;
	}
	--i;
	for(--j;j>n-1;j--)
	{
	 k++;a[i][j]=k;
	}
	++j;
	for(--i;i>n;i--)
	{
		k++;a[i][j]=k;
	}
	++i;
   }
   for(i=0;i<7;i++)
      {
   	for(j=0;j<7;j++)
   	printf("%4d",a[i][j]);
	printf("\n");
   }

}

