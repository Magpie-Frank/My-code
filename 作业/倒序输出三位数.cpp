#include<stdio.h>
int main()
{
	int a,a1,a2,a3,b;
	scanf("%d",&a);
	a1=a/100;
	a2=a/10%10;
	a3=a%10;
	b=a3*100+a2*10+a1;
	printf("%d",b);
	return 0;
}
