#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char num[n][6],name[n][11];
	int score[n];
	for(int i=0;i<n;i++)
	scanf("%s%s%d",num[i],name[i],&score[i]);
	double sum=0;
	for(int i=0;i<n;i++)
	sum+=score[i];
	double ave=sum/n;
	for(int i=0;i<n;i++)
	{
		if(score[i]<ave)
		printf("%s %s\n",name[i],num[i]);
	}
}
