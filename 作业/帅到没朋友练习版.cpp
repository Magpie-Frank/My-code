#include<stdio.h>
int main()
{
	int a[100000]={0};
	int N,k,t;
	scanf("%d",&N);
	while(N)
	{
		scanf("%d",&k);
		for(int i=0;i<k;i++)
		{
			if(k!=1)
			{
				scanf("%d",&t);
				a[t]+=k;
			}
		}
		N--;
	}
	int m,flag=1,u;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&u);
		if(!a[u])
		{
			printf("%d ",u);
			flag=0;
		}
	}
	if(flag)
	printf("none");
	
}
