#include<stdio.h>
int main()
{
	int bi=0,en=0,i=0,sum=0,j=0;
	scanf("%d %d",&bi,&en);
	for(i=bi;i<=en;i++)
	{
		printf("%5d",i);
		j++;
		if(j%5==0)
		printf("\n");
		sum=sum+i;
	}
	if(j%5!=0)
	printf("\nSum = %d",sum);
	else printf("Sum = %d",sum);
	return 0;
}
