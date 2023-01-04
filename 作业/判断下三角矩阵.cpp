#include<stdio.h>
int fun()
{
	int n,a[10][10],flag=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		if(j<i)
		if(a[i][j]!=0){
			flag=0;
		}
	}
	return flag;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(fun())
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
