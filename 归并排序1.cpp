//�ݹ�ʵ�ֹ鲢���� 
#include<stdio.h> 
#define MAX 100
int is1[MAX],is2[MAX];//ԭ����is1����ʱ�ռ�����is2
void merge(int low,int mid,int high){
    int i=low,j=mid+1,k=low;
    while(i<=mid&&j<=high)
        if(is1[i]<is1[j])
            is2[k++]=is1[i++];
        else
            is2[k++]=is1[j++];
    while(i<=mid)
        is2[k++]=is1[i++];
    while (j<=high)
        is2[k++]=is1[j++];
    for ( i = low; i <=high ; i++)
        is1[i]=is2[i];
}
 
void mergeSort(int a, int b){   //���� 
    if(a<b){
        int mid=(a+b)/2;
        mergeSort(a,mid);
        mergeSort(mid+1,b);
        merge(a,mid,b);
    }
}
 
int main(){
    int i,n;
   printf("������Ԫ�ظ�����");
    scanf("%d",&n);
    printf("����������ÿ��Ԫ�أ�\n");
    for ( i = 0; i <n ; i++) {
        scanf("%d",&is1[i]);
    }  
    mergeSort(0,n-1);
    printf("����������Ϊ��\n");
    for ( i = 0; i <n ; i++) {
        printf("%4d",is1[i]);
    }
}

