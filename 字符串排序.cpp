#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,chage=1;
	char s[6][80];
	char p[80];
	for(i=0;i<6;i++)
	gets(s[i]);
	for(i=0;i<6&&chage;i++)
	{
		for(j=0,chage=0;j<5;j++)
		{
				if(strcmp(s[j],s[j+1])>0)
				{
				strcpy(p,s[j]);strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
					chage=1;
				}


		}
	}
	printf("ÅÅÐòÎª£º\n"); 
	for(i=0;i<6;i++)
	puts(s[i]);
}

