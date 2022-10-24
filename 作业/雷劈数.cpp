#include<stdio.h>
int main()
{
	int a,b,x;
	for (int i=1000;i<=9999;i++)
	{
		a=i/100;
		b=i%100;
		x=a+b;
		if(x*x==i)
		printf("%d\n",i);
	}
	return 0;
}
