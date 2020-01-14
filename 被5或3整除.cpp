#include<stdio.h>
int main(void)
{
	int i,s=0;
	for(i=1;i<1001;i++)
	if(i%3==0||i%5==0)
	s+=i;
	printf("%d\n",s);
} 
