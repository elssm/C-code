#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[3][20],b[20];
	int m[3],i,j;
	printf("�������ѡ�ˣ�\n");
	for(i=0;i<3;i++)
	{
		gets(a[i]);
		m[i]=0;
	}
	printf("������80��ѡƱ��\n");
	for(i=0;i<80;i++)
	{
		gets(b);
		for(j=0;j<3;j++)
		if(!strcmp(a[j],b))
		m[j]++;
	}
	printf("ѡƱ�����\n");
	for(i=0;i<3;i++)
	printf("%s:%d ",a[i],m[i]);
}
