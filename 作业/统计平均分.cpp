#include<stdio.h>
int main()
{
	int arr[100],n,c;
	float av;
	scanf("%d",&n);
	c=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==-1)
		{
			arr[i]=0;
			break;
		}
		if((arr[i]<-1)||(arr[i]>100))
		{
			arr[i]=0;
			c--;
		}
		av=av+arr[i];
		c++;
	}
	av=av/c;
	printf("%.2f",av);
}
