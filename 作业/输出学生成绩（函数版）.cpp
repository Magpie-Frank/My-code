#include<stdio.h>
int max(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
int min(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
}
double ave(int a[],int n)
{
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum/n;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("average = %.2lf\n",ave(a,n));
	printf("max = %.2lf\n",(double)max(a,n));
	printf("min = %.2lf\n",(double)min(a,n));
}
