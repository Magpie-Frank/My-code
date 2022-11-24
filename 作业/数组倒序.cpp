#include<stdio.h>
swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
main()
{
	int a[10];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++)
	swap(&a[i],&a[n-1-i]);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	
}
