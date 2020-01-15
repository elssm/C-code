#include<stdio.h>
#include<iostream>
void gbsort(int a[], int l, int m, int h, int b[])
{
    int i,j,k;
    i = l;
    j = m + 1;//避免重复比较a[mid]
    k = 0;
    while (i <= m && j <= h)//数组a[low,mid]与数组(mid,high]均没有全部归入数组temp中去
    {
        if(a[i] <= a[j])        //如果a[i]小于等于a[j]
            b[k++] = a[i++]; //则将a[i]的值赋给temp[k]，之后i,k各加一，表示后移一位
        else
            b[k++] = a[j++]; //否则，将a[j]的值赋给temp[k]，j,k各加一
    }
    while(i <= m)             //表示数组a(mid,high]已经全部归入temp数组中去了，而数组a[low,mid]还有剩余
        b[k++] = a[i++];     //将数组a[low,mid]剩下的值，逐一归入数组temp
    while(j <= h)           //表示数组a[low,mid]已经全部归入到temp数组中去了，而数组(mid,high]还有剩余
        b[k++] = a[j++];     //将数组a(mid,high]剩下的值，逐一归入数组temp

    for (i = 0; i < k; i++)     //将归并后的数组的值逐一赋给数组a[low,high]
        a[l+i] = b[i];     //注意，应从a[low+i]开始赋值
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
