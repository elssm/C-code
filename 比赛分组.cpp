#include<stdio.h>
int main(void)
{
	char a[80]="ABC",b[80]="XYZ";
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%c %c\n",a[i],b[j]); 
	}
}
