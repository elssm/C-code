#include<stdio.h>
#include<math.h> 
#include<stdlib.h> 
int GetNum(int num,int pos)	//截取每个数上的每一位数字 
{
	int t=1;
	t=num/pow(10,pos-1);	
    return t%10;
}
void RadixSort(int a[], int s)
{
	int *array[10]; //0-9的序列 
	for(int i=0;i<10;i++)
	{
		array[i]=(int *)malloc(sizeof(int) *(s));
		array[i][0]=0;//给二维数组的第一列都赋值为0 
	}
	
	for(int pos=1;pos<10;pos++)//从各位开始取值 
	{
		for(int i=0;i<s;i++)
		{
			int num=GetNum(a[i],pos);
			int sum=++array[num][0];	//0-9序列上每个序列的个数 
			array[num][sum]=a[i];
		}
		for(int i=0,j=0;i<10;i++)
		{
			for(int k=1;k<=array[i][0];k++)
				a[j++]=array[i][k];
			array[i][0] = 0;
		}
	}
}
 
int main()
{   
    int i,a[10]={3,2,5,8,4,7,6,9,0,1};
    RadixSort(a,10);
	for(i=0;i<10;i++)
	printf("%3d",a[i]);
    return 0;
}
