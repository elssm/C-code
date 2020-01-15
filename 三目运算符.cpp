#include<stdio.h>
int main(void)
{
	int a,b,c,max;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
	max=(a>b?(a>c?a:c):(b>c?b:c));
	printf("%d\n",max);
}
} 
