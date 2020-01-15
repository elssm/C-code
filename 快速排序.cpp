//快速排序简单可以理解为挖坑填数，在这里取第一个数为基数，将i设为起点，将j设为终点 

#include<stdio.h>
void quicksort(int s[],int low,int high)
{
    if(low<high)
    {
        int i=low,j=high,x=s[low];
        while(i<j)
        {
            while(i<j && s[j]>=x) // 从右向左找第一个小于x的数
				j--;  
            if(i<j) 
				s[i++]=s[j];
			
            while(i<j && s[i]<x) // 从左向右找第一个大于等于x的数
				i++;  
            if(i<j) 
				s[j--]=s[i];
        }
        s[i] = x;
        quicksort(s,low,i-1); // 递归调用 
        quicksort(s,i+1,high);
    }
}

void printlink(int a[],int s2)
{
	for(int i=0;i<s2;i++)
	printf("%3d",a[i]);
}
int main(void)
{
	int a[10]={3,2,5,8,4,7,6,9,0,1};
	quicksort(a,0,10);
	printlink(a,10);
	return 0;
}
