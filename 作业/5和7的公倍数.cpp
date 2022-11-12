#include<stdio.h>
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		if(t<0)
		return 0;
		else
		{
			if((t%5==0)&&(t%7==0))
			printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
