#include<stdio.h>
int main()
{
	int judge(int num);
	int i=0,n=0,m=0,t=0,b=0,j=0,ex=0,arr[1000],c=0;
	scanf("%d",&t);
	for(i=0;i<=999;i++)
	arr[i]=0;
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);
		for(j=n;j<=m;j++)
		{
			b=judge(j);
			switch(b)
			{
				case 1:arr[c]=j;c++;ex=1;break;
				case 0:break;
			}
		}
		if(ex==0)
		{
			printf("none\n");
		}
		if(ex==1)
		{
			printf("%d",arr[0]);
			for(j=1;j<c;j++)
				printf(" %d",arr[j]);
			printf("\n");
		}
		ex=0;
		for(j=0;j<=999;j++)
			arr[j]=0;
		c=0;
	}		
	return 0;
}
int judge(int num)
{
	if((num%3==2)&&(num%7==1))
		return 1;
	else return 0;
}
