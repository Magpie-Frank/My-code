#include<stdio.h>
int main()
{
	int con=0,t,n;
	scanf("%d",&n);
	for(int i=1;i<=n/5;i++)
		for (int j=1;j<=n/2;j++)
			for (int k=1;k<=n;k++)
			if(i*5+j*2+k==n)
			{
				con++;
				printf("\nfen5:%d, fen2:%d, fen1:%d, total:%d",i,j,k,i+j+k);
			}
	printf("\ncount:%d",con);
	return 0;
}
