#include<stdio.h>
#include<math.h>
int fun()
{
	int i,a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if((pow(a,3)+pow(b,3)+pow(c,3))==i)
		printf("%d\n",i);
	}
} 
int main(void)
{
fun();
}
