#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main(void)
{
	int *p=NULL,num,i;
	printf("please input the number of the string:");
	scanf("%d",&num);
	p=(int*)malloc(sizeof(int)*num);
	if(p==NULL)
	{
	printf("out of memory,press any key to quit...\n");
	exit(0) ;
}
		printf("please input %d string:",num);
		for(i=0;i<num;i++)
		scanf("%d",&p[i]);
		printf("%d strings are:\n",num);
		for(i=0;i<num;i++)
		printf("%d,",p[i]);
		free(p);
}
