#include<stdio.h>
int main(void)
{
	int i,j,n;
	char a[10][20];
		scanf("%d",&n);
	for(i=0;i<n+1;i++)
	gets(a[i]);
	for(i=0;i<n+1;i++)
	{
	printf("%s",a[i]);
	printf("\n");
}
}
