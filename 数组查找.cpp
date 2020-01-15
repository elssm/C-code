//数值不重复 
#include<stdio.h>
int main(void)
{
	int a[10]={10,25,22,48,89,68,77,103,456,0};
	int key,i;
	printf("请输入要查找的值：");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==a[i])
		{ 
		printf("第%d个元素",i+1);
		break;
	}
	}
	if(i==10)
	printf("NOT FOUND！"); 
} 
