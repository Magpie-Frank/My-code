#include<stdio.h>
int main()
{
	int n,a[100],k,t,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&m);
		t=a[m-1];
		for(int j=m-1;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=t;
	}
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
		printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
}
