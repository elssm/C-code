//��Ļ�����������
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
	printf("���������ǵ������� "); 
	scanf("%d",&n);
	printstar(n);
}
