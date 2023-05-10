#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int n;
	long int t,a[7]={0};
	srand(time(NULL));
	for(int i=0;i<5000;i++)//掷骰子5000次
	{
		
		t=rand()%6+1;
		a[t]++;
	}
	for(int i=1;i<=6;i++)
	{
		printf("点数%d:%ld次,概率为%%%.2f\n",i,a[i],(float)a[i]/50);
	}
}
