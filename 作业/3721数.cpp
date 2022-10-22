#include<stdio.h>
int main()
{
	int judge(int num);
	int i=0,n=0,m=0,t=0,b=0,j=0,ex=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);
		for(j=n;j<=m;j++)
		{
			b=judge(j);
			switch(b)
			{
				case 1:printf("%d ",j);ex=1;break;
				case 0:break;
			}
		}
		switch(ex)
		{
			case 0:printf("none\n");break;
			case 1:printf("\n");break;
		}
		ex=0;
	}		
	return 0;
}
int judge(int num)
{
	if((num%3==2)&&(num%7==1))
		return 1;
	else return 0;
}
