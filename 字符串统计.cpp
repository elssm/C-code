#include<stdio.h>
#include<string.h> 
int main(void)
{
	char s[20][100];
	int n,t,i,j,a,b,c,d,e;
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	gets(s[i]);
	for(i=1;i<n+1;i++)
	{
	a=0;b=0;c=0;d=0;e=0;
	t=strlen(s[i]);
	for(j=0;j<t;j++)
	{
		if(s[i][j]==' ')
		a++;
		else
		if(s[i][j]>='a'&&s[i][j]<='z')
		b++;
		else
		if(s[i][j]>='A'&&s[i][j]<='Z')
		c++;
		else
		if(s[i][j]>='0'&&s[i][j]<='9')
		d++;
		else
		e++;
	}
	printf("%d %d %d %d %d %d %d",t,a+1,c,b,d,a,e);
	printf("\n");
	}
}

