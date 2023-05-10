#include<stdio.h>
#include<math.h>
int N;
int ifsxh(int n)
{
	int t,sum=0,n1=n;
	for(int i=0;i<N;i++)
	{
		if(n==0)
		return 0;
		t=n%10;
		n=n/10;
		sum+=(int)pow(t,N);
		if(sum>n1)
		return 0;
	}
	if(sum==n1)
		return 1;
	else return 0;
}
int main()
{
	int ifsxh(int n);
	scanf("%d",&N);
	int a=1,f=0;
	for(int i=1;i<N;i++)
	{
		a*=10;
	}
	for(int i=a;i<10*a;i++)
	{
		f=ifsxh(i);
		if(f==1)
		{
			printf("%d\n",i);
		}
	}
}
