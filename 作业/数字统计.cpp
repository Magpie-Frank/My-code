#include<stdio.h>
int main()
{
	int i=0,t,s=0,b=0,tag,max=0;
	int a[1000][2];
	while(scanf("%d",&t)!=EOF)
	{
		for(i=0;i<=s;i++)
		{
			if(t==a[i][0])
			{
				b=1;
				break;
			}
		}
		if(b==1)
		a[i][1]++;
		if(b==0)
		{
			a[s][0]=t;
			a[s][1]++;
			s++;
		}
		b=0;
	}
	for(i=0;i<=s;i++)
	{
		if(a[i][1]>max)
			{
				max=a[i][1];
				tag=a[i][0];
			}	
	}
	printf("%d %d",tag,max);
	return 0;
}
