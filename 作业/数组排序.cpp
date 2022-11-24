#include<stdio.h>
rank(int n,int a[])
{
	int *k=a;
	int t;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=*(k+i);
				*(k+i)=*(k+j);
				*(k+j)=t;
			}
		}
	}
	
}
main()
{
	int a[20];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rank(n,a);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
