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
	int *s;//ָ��ջ�ռ�
	int x,top;
	//����ջ�ռ�
	s=(int* )malloc(max*sizeof(int)); 
	//����������
	printf("������һ����������");
	scanf("%d",&x); 
	//ת��������
	top=ExchangeBin(s,x); 
	//���
	printBin(s,top);
	free(s);
} 
