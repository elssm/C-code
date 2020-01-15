#include<stdio.h> 
int lengthOfLongestSubstring(char* s) {
	static int sum;
    static int temp;
    static int next[100]={1};
    static int k=0;
    sum=sizeof(s)/sizeof(s[0]);
    for(int j=1;s[j]!='\0';j++){
        for(int i=k;i<j;i++){
            if(s[j]!=s[i]&&j-i==1)
                next[j]=next[j-1]+1;
            else if(s[j]==s[i]){
                next[j]=1;
                k=j;
                break;
            }
                
        }
    }
    for(int i=0;i<sum-1;i++){
        for(int j=i+1;j<sum;j++){
            if(next[i]<next[j]){
                	temp=next[i];
			        next[i]=next[j];
			        next[j]=temp;
            }
        }
    }
   printf("%d",next[0]);
}
int main(){
	char *s="bbbbb";
	lengthOfLongestSubstring(s);	
}
