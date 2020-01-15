#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[3][20],b[20];
	int m[3],i,j;
	printf("请输入候选人：\n");
	for(i=0;i<3;i++)
	{
		gets(a[i]);
		m[i]=0;
	}
	printf("请输入80张选票：\n");
	for(i=0;i<80;i++)
	{
		gets(b);
		for(j=0;j<3;j++)
		if(!strcmp(a[j],b))
		m[j]++;
	}
	printf("选票结果：\n");
	for(i=0;i<3;i++)
	printf("%s:%d ",a[i],m[i]);
}
