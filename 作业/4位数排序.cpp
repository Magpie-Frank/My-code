#include<stdio.h>
int main()
{
	int a[4];
	int i,j,t;
	for(i=0;i<=4;i++)
		scanf("%d ",&a[i]);
	for(i=0;i<=4;i++)
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	for(i=0;i<=4;i++)
	printf("%d ",a[i]);
	return 0;
}
