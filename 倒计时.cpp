#include <stdio.h> 
#include <time.h> 
#include <dos.h>
#include <conio.h>
#include<windows.h>
int main(void)
{ 
clock_t start,end; 
int n; 
char ch=0;

printf("How many seconds do you want to count? "); 
scanf("%d",&n); 
getchar(); 

start=end=clock(); 
while((n-(int)(end-start)/19)>=0) 
{ 
printf("the time is: %d",n-(int)(end-start)/19); 
Sleep(1); 
end=clock(); 
if( kbhit() )
 ch = getch();
if(ch=='0' )
{
    getchar(); 
    break;
}
} 
}
