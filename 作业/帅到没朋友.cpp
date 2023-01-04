#include <stdio.h>
int main()
{
	int a[1000000]={ 0 };
	int N,K,M; 
	int i,n,m,sum=0; 
	scanf("%d",&N); 
	while(N--)
	{
		scanf("%d",&K);
		for(i=1;i<=K;i++)
		{
			scanf("%d",&n);
			if(K!=1)
			{
				a[n]+=K;
			}	 
		}
	}
	scanf("%d",&M);	
	while(M--)
	{
		scanf("%d",&m);
		if(a[m]==0)
		{
			if(sum!=0) printf(" ");
			printf("%05d",m); 
			a[m]=1;
			sum++; 
		}		
	}
	if(sum==0) printf("No one is handsome");
	return 0;
}
