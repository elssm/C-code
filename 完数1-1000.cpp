#include<stdio.h>
#include<math.h>
void print(void)
{
	int i,j,sum;
	for(i=2;i<1001;i++)
	{
			sum=0;
					for(j=1;j<=i/2;j++)
						if(i%j==0)
							sum+=j;
						if(!(sum-i))
							{
								printf("%d的因数是1",i);
								for(j=2;j<=i/2;j++)
									{
										if(!(i%j)) printf(",%d",j);
									}
								printf("\n");
							}
			}
}
int main(void)
{
				Printf();
				return 0;
}

