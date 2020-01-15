#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[1000],s2[1000];
	int i,t=0,k;
	gets(s1);
	gets(s2); 
	k=strlen(s1); 
	for(i=0;i<k;i++)
	if(s1[i]!=s2[i])
	{
		t++;
		if(s1[i+1]=='*')
		s1[i+1]='o';
		else
		s1[i+1]='*';
	}
	printf("%d\n",t); 
}
