//��������򵥿������Ϊ�ڿ�������������ȡ��һ����Ϊ��������i��Ϊ��㣬��j��Ϊ�յ� 

#include<stdio.h>
void quicksort(int s[],int low,int high)
{
    if(low<high)
    {
        int i=low,j=high,x=s[low];
        while(i<j)
        {
            while(i<j && s[j]>=x) // ���������ҵ�һ��С��x����
				j--;  
            if(i<j) 
				s[i++]=s[j];
			
            while(i<j && s[i]<x) // ���������ҵ�һ�����ڵ���x����
				i++;  
            if(i<j) 
				s[j--]=s[i];
        }
        s[i] = x;
        quicksort(s,low,i-1); // �ݹ���� 
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
