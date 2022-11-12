#include<stdio.h>
int main()
{
	int a[10],n,t=0;
	scanf("%d",&n);
	for(int i=0;i<10;i++)
	a[i]=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<=a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
	return 0;
}
