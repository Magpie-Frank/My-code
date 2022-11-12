#include<stdio.h>
int main()
{
	char a[100][10];
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		if(a[i][0]+a[i][1]+a[i][2]==a[i][3]+a[i][4]+a[i][5])
		printf("You are lucky!\n");
		else printf("Wish you good luck.\n");
	}
}
