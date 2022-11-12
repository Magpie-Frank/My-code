#include<stdio.h>
int main()
{
	char tag,name;
	int n,i;
	double pri,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%c %lf",&name,&pri);
		if(pri>max)
		{
			max=pri;
			tag=name;
		}
	}
	printf("%d",i);
}
