#include<stdio.h>
int main()
{
	int time,n,a[100],temp;
	scanf("%d %d",&n,&time);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<time;i++)
	{
		temp=a[0];
		for(int j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
	return 0;
}
