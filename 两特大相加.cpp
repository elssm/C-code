  #include<stdio.h>
#include<string.h>
# define N 3000
int main(void)
{
	char a[N],b[N];
	int i,j,k,x,cp=0,s[N];
	printf("the first string is:");
	gets(a);
	printf("the second string is:");
	gets(b);
	i=strlen(a)-1;
	j=strlen(b)-1;
	k=N-1;
	while(i>-1||j>-1){
		if(i>-1&&j>-1)
		x=a[i--]-'0'+b[j--]-'0'+cp;
		else if(i>-1&&j==-1)
		x=a[i--]-'0'+cp;
		else x=a[j--]-'0'+cp;
		s[k--]=x%10;
		cp=x/10;
	}
	if(cp)
	s[k--]=cp;
	printf("sum=:");
	for(i=k+1;i<N;i++)
	printf("%d",s[i]);
} 
