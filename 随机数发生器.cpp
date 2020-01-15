#include<stdio.h>  
#include<time.h> 
#include<stdlib.h> 
#define MAX 11  
int main() 
{
    srand((unsigned)time(0));
    int a[5],i; 
    for (i=0;i<5;i++) 
	{
		a[i]=1+rand()%MAX;  
		printf("%3d",a[i]);
 } 
}

