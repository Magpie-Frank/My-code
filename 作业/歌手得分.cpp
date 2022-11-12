#include<stdio.h>
int main()
{
	int loop;
	scanf("%d",&loop);
	int n,n1,m,a[100],t;
	float sum;
	for(int l=1;l<=loop;l++)
	{
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(int i=0;i<n;i++)
			for(int j=0;j<n-i-1;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		n1=n;
		for(int i=0;i<m;i++)
		{
			a[i]=0;
			a[n-i-1]=0;
			n1=n1-2;
		}
		for(int i=0;i<n;i++)
		sum=sum+a[i];
		printf("%.2f\n",sum/n1);
        sum=0;
	}
	return 0;
}
