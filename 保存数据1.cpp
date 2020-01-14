#include<stdio.h>
 int main(void)
 {
 	int t=0,i,sum=0;
 	int score[9]={10,20,30,40,50,60,70,80,90};
 	int below[10];
 	for(i=0;i<9;i++)
 	sum=sum+score[i];
 	for(i=0;i<9;i++)
 {
 	if(score[i]<sum/9)
 	{
 		t++;
 		below[i]=score[i];
 		printf("%d\n",below[i]);
 		below[i+1]=0;
 	}
 }
 printf("t=%d\n",t);
 }
