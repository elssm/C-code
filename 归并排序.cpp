#include<stdio.h>
#include<iostream>
void gbsort(int a[], int l, int m, int h, int b[])
{
    int i,j,k;
    i = l;
    j = m + 1;//�����ظ��Ƚ�a[mid]
    k = 0;
    while (i <= m && j <= h)//����a[low,mid]������(mid,high]��û��ȫ����������temp��ȥ
    {
        if(a[i] <= a[j])        //���a[i]С�ڵ���a[j]
            b[k++] = a[i++]; //��a[i]��ֵ����temp[k]��֮��i,k����һ����ʾ����һλ
        else
            b[k++] = a[j++]; //���򣬽�a[j]��ֵ����temp[k]��j,k����һ
    }
    while(i <= m)             //��ʾ����a(mid,high]�Ѿ�ȫ������temp������ȥ�ˣ�������a[low,mid]����ʣ��
        b[k++] = a[i++];     //������a[low,mid]ʣ�µ�ֵ����һ��������temp
    while(j <= h)           //��ʾ����a[low,mid]�Ѿ�ȫ�����뵽temp������ȥ�ˣ�������(mid,high]����ʣ��
        b[k++] = a[j++];     //������a(mid,high]ʣ�µ�ֵ����һ��������temp

    for (i = 0; i < k; i++)     //���鲢��������ֵ��һ��������a[low,high]
        a[l+i] = b[i];     //ע�⣬Ӧ��a[low+i]��ʼ��ֵ
} 
void mergesort(int a[],int l,int h,int b[])
{
	if(l<h)
	{
		int m=(l+h)/2;
		mergesort(a,l,m,b);
		mergesort(a,m+1,h,b);
		gbsort(a,l,m,h,b);
	}
}
int main(void)
{
	int a[]={3,2,5,8,4,7,6,9,0,1};
	int b[20];
	mergesort(a,0,9,b);
	for(int i=0;i<10;i++)
	printf("%5d",b[i]);
	return 0;
}
