#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{
	int m,i; 
	srand((unsigned)time(NULL));
	for(i=0;i<5;i++)
	{
		m=rand()%11+1;
		printf("%3d",m);
	}
}

