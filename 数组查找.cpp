//��ֵ���ظ� 
#include<stdio.h>
int main(void)
{
	int a[10]={10,25,22,48,89,68,77,103,456,0};
	int key,i;
	printf("������Ҫ���ҵ�ֵ��");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(key==a[i])
		{ 
		printf("��%d��Ԫ��",i+1);
		break;
	}
	}
	if(i==10)
	printf("NOT FOUND��"); 
} 
