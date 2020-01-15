//循环队列实现约瑟夫环
  #include<stdio.h>
  #include<stdlib.h>
  void johnphus_ring(int *q,int n,int s)
  {
  	int front=0,rear=n;
  	int i;
  	while(front-rear){ 
  	for(i=0;i<s-1;i++)
  	{
  		front=(front+1)%n;
  		rear=(rear+1)%n;
  		q[rear]=q[front];  
  	}
	  front=(front+1)%n;
	  print("%5d",q[front]); 
  	} 
  	
  	
  }
  int main(void)
  {
  	int *q;
  	int n,s;
  	print("请输入个数和");
  	scanf("%d%d",&n,&s);
  	q=(int*)malloc((n+1)*sizeof(int)); 
	for(int i=1;i<n+1;i++)  	
  } 
