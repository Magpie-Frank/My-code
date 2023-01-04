#include<stdio.h>
void fun(int n)
{
	if(n==0)
	return;
	for(int i=1;i<=n;i++)
	{
		printf("+%d",i);
		fun(n-i);
	}
	printf(";");
}
int main()
{
	int n,t=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		t++;
		printf("%d=%d",n,i);
		fun(n-i);
		printf("\n");
	}
	return 0;
}
