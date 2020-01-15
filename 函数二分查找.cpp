#include<stdio.h>
void sort(int a[],int n)
{ 
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	
}
int findsort(int a[],int n,int key)
{
	int low, high, mid;
    low = 0;
    high = n - 1;
    while ( low <= high ) {
        mid = (low + high) / 2;
        if(key < a[mid]){
            high = mid - 1;
        }
        else if(key > a[mid]){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
 
    return -1;	
}
int main(void)
{
	int key=5;
	int a[2]={2,5};
	sort(a,2);
	printf("%3d",findsort(a,2,key));
	return 0;
	
	
} 
