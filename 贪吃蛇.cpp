#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h> 
int main(void)
{
	int a[20][40],i,j;
	for(i=0;i<20;i++)
	{
		for(j=0;j<40;j++)
		if(i==0||j==0||i==19||j==39)
		printf("*");
		else 
		printf(" ");
	printf("\n");
	}
	srand((unsigned)time(NULL));
	for(i=1;i<19;i++)
	{
		for(j=1;j<39;j++) 
		if(i==rand()%18+1&&j==rand()%38+1)
		printf("*");
		else
		printf(" ");
		Sleep(1000); 
	}
} 
