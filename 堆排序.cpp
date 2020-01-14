#include<stdio.h>
// ��������Ԫ��λ��
void Swap( int *a, int *b )
{
    int temp;
	temp=*b;
    *b=*a;
    *a=temp;
}

// array�Ǵ������Ķ�����,i�Ǵ�����������Ԫ�ص�λ��,nlength������ĳ���
void HeapAdjust(int a[],int i,int s)
{
    int child, temp;
    for(temp=a[i];2*i+1<s;i=child)
    {
        // child:���ӽ���λ���� �����λ�� * 2 + 1  child + 1�� ���ӽ�� 
        child=2*i+1;
        // �õ��ӽ���нϴ�Ľ��
        if(child!=s-1 && a[child+1]>a[child])
            ++child;
        // ����ϴ���ӽ����ڸ������ô�ѽϴ���ӽ�������ƶ�,�滻���ĸ����
        if (temp<a[child])
            a[i]=a[child];
        else  // �����˳�ѭ��
            break;
    }
    // ������Ҫ������Ԫ��ֵ�ŵ����ʵ�λ��
    a[i]=temp;
}
// �������㷨
void HeapSort(int a[], int s)
{
    // �������е�ǰ�벿��Ԫ��,����ÿ���к��ӵĽڵ㣩������֮����һ���󶥶ѣ���һ��Ԫ�������е�����Ԫ��
    for(int i=s/2-1;i>=0;--i)
    {
        HeapAdjust(a,i,s);
    }
    // �����һ��Ԫ�ؿ�ʼ�����н��е���,���ϵ���С�����ķ�Χֱ����һ��Ԫ��
    for(int i=s-1;i>0;--i)
    {
        // �ѵ�һ��Ԫ�غ͵�ǰ�����һ��Ԫ�ؽ���,
        // ��֤��ǰ�����һ��λ�õ�Ԫ�ض��������ڵ��������֮������
        Swap(&a[0],&a[i]);
        // ������С����heap�ķ�Χ,ÿһ�ε�����ϱ�֤��һ��Ԫ���ǵ�ǰ���е����ֵ
        HeapAdjust(a,0,i);
    }
}
 
int main()
{   //��������
    int i,a[10]={3,2,5,8,4,7,6,9,0,1};
    HeapSort(a,10);
    for(i=0;i<10;i++)
    printf("%3d",a[i]);
    return 0;
}
