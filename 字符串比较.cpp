#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[6][80];
	int i,j,k; 
	for(i=0;i<6;i++)
	gets(s[i]);
	for(i=0;i<6;i++)
	puts(s[i]);
}
