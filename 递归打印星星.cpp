//屏幕输出四行星星
#include<stdio.h>
void printstar(int raw)
{
	if(raw==0)
	return;
	else
	{
		printf("* * * * *\n");
		printstar(raw-1);
	}
}
int main(void)
{
	int n;
	printf("请输入星星的行数： "); 
	scanf("%d",&n);
	printstar(n);
}
