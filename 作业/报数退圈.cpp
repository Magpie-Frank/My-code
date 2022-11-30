#include<stdio.h>
int n=0;
void fun(int n,int m,int *a)
{
	int count=0,q=n,i=0;
	while(q)
	{
		if(a[i])
		{
			count++;
			if(count-m==0)
			{
				printf("%-3d",a[i]);
				a[i]=0;
				q--;
				count=0;
			}
		}
		i++;
		if(i==n)
			i=0;
	}
}
int main()
{
	int m;
	scanf("%d%d",&n,&m);
	int a[20];
	for(int i=0;i<n;i++)
	a[i]=i+1;
	fun(n,m,a);
	return 0;
}
