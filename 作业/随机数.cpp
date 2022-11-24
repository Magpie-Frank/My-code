#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int seed;
	scanf("%d",&seed);
	srand(seed);
	int t=0,max=0,l,r;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			t=rand()%101+100;
			if(t>max)
			{
				max=t;
				l=i;
				r=j;
			}
		}
	}
	printf("(%d,%d)",l,r);
}
