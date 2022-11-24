#include<stdio.h>
int fbnq(int n)
{
	if((n==1)||(n==2))
	return 1;
	return fbnq(n-1)+fbnq(n-2);
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fbnq(n));
}
