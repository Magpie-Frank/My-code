#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(j>i)
			printf("          ");
			else printf("%d*%d=%2d    ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
