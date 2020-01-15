#include<stdio.h>
# define M 10
int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int l=0,h=M-1,m,n,cp=0;
	printf("please input a number:");
	scanf("%d",&n);
	while(l<=h){
		m=(l+h)/2;
		if(n==a[m])
		{
		cp=1;
		break;	
		}
		else if(n>a[m])
		l=m+1;
		else
		h=m-1;
	}
	if(cp==1)
	printf("the number %d is %d",n,m);
	else
	printf("there is not %d",n);
} 
