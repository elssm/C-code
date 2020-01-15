#include<stdio.h>
#include<math.h>
int fun1(int i)
{
	int j,sum=0;
		for(j=1;j<i;j++)
			if(!(i%j))
				sum+=j;
	return sum;
}
int main(void)
{
	int i,j;
	for(i=1;i<1000;i++)
	{
		for(j=1;j<1000;j++)
			if(fun1(i)==fun1(j)&&j!=i)
				printf("%dºÍ%d ÊÇ»¥ÂúÊý\n",i,j);
	}
	return 0;
}

