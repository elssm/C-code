//递归逆向输出数组元素
  #include<stdio.h>
  void preprint(int a[],int n)
  {
  	if(!n)
  	return;
  	else
	  {
  	preprint(a+1,n-1);
  	printf("%5d",a[0]);  
  }
  } 
int main(void)
{
	int n=5,a[5]={1,2,3,4,5};
	preprint(a,5);
	return 0;
}
