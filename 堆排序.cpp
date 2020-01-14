#include<stdio.h>
// 交换数组元素位置
void Swap( int *a, int *b )
{
    int temp;
	temp=*b;
    *b=*a;
    *a=temp;
}

// array是待调整的堆数组,i是待调整的数组元素的位置,nlength是数组的长度
void HeapAdjust(int a[],int i,int s)
{
    int child, temp;
    for(temp=a[i];2*i+1<s;i=child)
    {
        // child:左子结点的位置是 父结点位置 * 2 + 1  child + 1： 右子结点 
        child=2*i+1;
        // 得到子结点中较大的结点
        if(child!=s-1 && a[child+1]>a[child])
            ++child;
        // 如果较大的子结点大于父结点那么把较大的子结点往上移动,替换它的父结点
        if (temp<a[child])
            a[i]=a[child];
        else  // 否则退出循环
            break;
    }
    // 最后把需要调整的元素值放到合适的位置
    a[i]=temp;
}
// 堆排序算法
void HeapSort(int a[], int s)
{
    // 调整序列的前半部分元素,（即每个有孩子的节点）调整完之后是一个大顶堆，第一个元素是序列的最大的元素
    for(int i=s/2-1;i>=0;--i)
    {
        HeapAdjust(a,i,s);
    }
    // 从最后一个元素开始对序列进行调整,不断的缩小调整的范围直到第一个元素
    for(int i=s-1;i>0;--i)
    {
        // 把第一个元素和当前的最后一个元素交换,
        // 保证当前的最后一个位置的元素都是在现在的这个序列之中最大的
        Swap(&a[0],&a[i]);
        // 不断缩小调整heap的范围,每一次调整完毕保证第一个元素是当前序列的最大值
        HeapAdjust(a,0,i);
    }
}
 
int main()
{   //测试数据
    int i,a[10]={3,2,5,8,4,7,6,9,0,1};
    HeapSort(a,10);
    for(i=0;i<10;i++)
    printf("%3d",a[i]);
    return 0;
}
