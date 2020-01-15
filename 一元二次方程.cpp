#include<stdio.h>
#include<math.h>
int main(void)
{
	double a,b,c,p,q,s;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
		s=b*b-4*a*c;
		p=(-b+sqrt(s))/(2*a);
		q=(-b-sqrt(s))/(2*a);
		if(p>=q)
		printf("%10.2lf%10.2lf\n",q,p);
		else
		printf("%10.2lf%10.2lf\n",p,q);
	}
}
