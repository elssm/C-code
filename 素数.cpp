#include<stdio.h>
#include<math.h>
int fun(int n)
{
			int i,j;
			for(i=2;n%i;i++);
			if(i==n)
			printf("1");
			else  printf("0");
}

int main(void)
{
			int cnt=0,i,j;
			scanf("%d",&j);
			fun(j);
}

