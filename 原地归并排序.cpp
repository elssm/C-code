#include <iostream>  
using namespace std;  
template <typename T>  
void swap(T a[],int first,int second){  
    T temp;  
    temp = a[first];  
    a[first] = a[second];  
    a[second] = temp;  
}  
template <typename T>  
void reverse(T a[],int begin,int end){  
    while(begin < end){  
        swap(a,begin++,end--);  
    }  
}  
template <typename T>  
void exchange(T a[],int begin,int mid,int end){  
    reverse(a,begin,mid);  
    reverse(a,mid+1,end);  
    reverse(a,begin,end);  
}  
template <typename T>  
void merge(T a[],int begin,int mid,int end){  
    int i = begin;  
    int j = mid + 1;  
    while( i < j && j <= end){  
        while(i < j && a[i] <= a[j]){  
        i++;  
    }  
    int old_j = j;  
    while(j <= end && a[j] < a[i]){  
        j++;  
    }  
    exchange(a,i,old_j-1,j-1);  
    i += (j - old_j);  
    }  
      
}  
template <typename T>  
void merge_sort(T a[],int begin,int end){  
    if(begin < end){  
        int mid = begin + (end - begin)/2;  
        merge_sort(a,begin,mid);  
        merge_sort(a,mid+1,end);  
        merge(a,begin,mid,end);  
    }  
}  
int main() {  
    int a[] = {2,3,1,55,6,4,7,3};  
    int len = sizeof(a)/sizeof(int);  
    int mid = 3;  
    merge_sort(a, 0, len-1);  
    int i;  
    for (i = 0; i < len; ++i)  
        cout << a[i] << " ";  
    cout << endl;  
}
