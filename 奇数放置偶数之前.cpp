#include<stdio.h>
int main(void)
{
int a[100],b[100],i,j,n,m=0;
for(i=0;i<100;i++)
{
scanf("%d",&a[i]);
if(a[i]==-1)
break;
}
i--;
n=i;
for(j=0;j<i+1;j++)
{
if(a[j]%2==0)
b[n--]=a[j];
else
b[m++]=a[j];
}
for(j=0;j<i+.01;j++)
printf("%5d\n",b[j]);
}


