#include<stdio.h>
#include<stdlib.h>
# define max 100
int ExchangeBin(int *s,int x)
{
	int top=-1;
	while(x){
		s[++top]=x%2;
		x=x/2;
	}
	return top;
}
void printBin(int *s,int top)
{
	while(top!=-1){
		printf("%5d",s[top--]);
	}
	
}
int main(void)
{
	int *s;//指向栈空间
	int x,top;
	//定义栈空间
	s=(int* )malloc(max*sizeof(int)); 
	//输入正整数
	printf("请输入一个正整数：");
	scanf("%d",&x); 
	//转换二进制
	top=ExchangeBin(s,x); 
	//输出
	printBin(s,top);
	free(s);
} 
