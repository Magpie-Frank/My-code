#include<stdio.h>
int main()
{
	char tab[100];
	int n=0,i=0,j=0;
	for(n=0;n<100;n++)
	tab[n]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	tab[i]=48+n-i;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		printf("%c ",tab[j]);
		printf("\n");
		tab[i-1]=' ';
	}
	return 0;
}
