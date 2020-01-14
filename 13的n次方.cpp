#include<stdio.h>
#define N 300
int main(void)  
{
	int a[N],k,s,cp,t,i,j;
	while(scanf("%d",&t)!=EOF)
	{
		a[N-1]=1;
		s=N-2;
	for(i=1;i<t+1;i++)
	{
		j=N-1;cp=0;
		while(j>s)
		{
			k=a[j]*13+cp;
			a[j]=k%10;
			cp=k/10;
			j--;
		}
		while(cp)
		{
			a[s--]=cp%10;
			cp=cp/10;
		}
	}
	for(i=s+1;i<N;i++)
		printf("%d",a[i]);
		printf("\n");
}
} 
