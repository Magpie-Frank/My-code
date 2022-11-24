#include<stdio.h>
int main()
{
	char i,t='A';
	while(scanf("%c",&i)!=EOF)
	{
		if(i==' ')
		{
			printf("%c",t);
			t++;
		}
		else
		{
			printf("%c",i);
		}
	}
	return 0;
}
