#include<stdio.h>
int main()
{
	int a[10],n,t=0,s=0;
	scanf("%d %d",&n,&s);
	for(int i=0;i<10;i++)
	a[i]=0;
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	if(i==s-1)
					{
						for(int k=0;k<n;k++)
						{
							if(k<n-1)
							printf("%d ",a[k]);
							else printf("%d",a[k]);
						}
						return 0;
					}
	}
	return 0;
}
