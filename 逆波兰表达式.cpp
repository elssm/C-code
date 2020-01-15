#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char ex[100];
	int val;
	//输入
	printf("请输入一个表达式：");
	gets(ex);
	//计算
	rel=Computer(ex);
	int Computer(char ex[])
	{
		
	} 
	int level(char op)
	{
		switch(op)
		{
			case '*':
			case '/': return 3; 
			case '+':
			case '-': return 2;
			case '(': return 1;
			case '@': return 0;
	}
	int x;
	if(op=='*') x=x1*x2;
	else if(op='/') x=x1/x2;
	else if(op='+') x=x1+x2;
	else if(op='-') x=x1-x2; 
			
			
			
			
			
			
			
			
			
			
			
		}
	}
} 
