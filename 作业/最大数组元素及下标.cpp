#include<stdio.h>
int main()
{
	int arr[10];
	int n,tag=0,max;
	for(int i=0;i<10;i++)
	arr[i]=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
    max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			tag=i;
		}
	}
	printf("%d %d",max,tag);
	return 0;
}
