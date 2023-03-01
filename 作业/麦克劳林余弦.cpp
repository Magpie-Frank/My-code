#include<stdio.h>
#include<math.h>
int main()
{
	double c=1,x,t,m=1;
	int i=2;
	scanf("%lf",&x);
	do
	{
		m=-m*x*x;
		m=m/(i-1)/i;
		i+=2;
		c=m+c;
	}while(fabs(m)>0.001);
	printf("%.6lf",c);
}
