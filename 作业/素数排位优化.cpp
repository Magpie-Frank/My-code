#include<stdio.h>
#include<math.h>
int main()
{
	long int x,flag=0;
	int sushu(long int n);
	while(scanf("%d",&x)!=EOF)
	{
		if(sushu(x))
		{
			for(long int i=2;i<=x;i++)
			{
				if(sushu(i))
				flag++;
			}
			printf("%d\n",flag);
			flag=0;
		}
		else printf("0\n");
	}
	return 0;
}
int sushu(long int n)
{
	if(n==2)
	return 1;
	if(n<2)
	return 0;
	if(n%2==0)
	return 0;
	for(long int i=3;i<=sqrt(n+1);i+=2)
	if(n%i==0)
	return 0;
	return 1;
}
