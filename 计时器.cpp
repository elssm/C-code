#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct clock{
	int hours;
	int minutes;
	int seconds;
};
void display(struct clock t)
{
	printf("\r%02d:",t.hours);
	printf("%02d:",t.minutes);
	printf("%02d",t.seconds);
}
struct clock update(struct clock t)
{
	t.seconds++;
	if(t.seconds==60)
	{
		t.seconds=0;
		t.minutes++;
	}
	if(t.minutes==60)
	{
		t.minutes=0;
		t.hours++;
	}
	if(t.hours==24)
		t.hours=0;
		Sleep(1000);
		return t;
}
int main(void)
{
	struct clock c1={0,0,0
	};
	char ch;
	display(c1);
	ch=getch();
	while(1)
	{
		if(ch=='s'||ch=='S')
		{
			c1=update(c1);
			display(c1);
			if(kbhit())
			{
				ch=getch();
				if(ch=='e'||ch=='E')
				break;
			}
		}
		else
		if(ch=='e'||ch=='E')
		break;
		else
		ch=getch();
	}
	printf("\n");
}
