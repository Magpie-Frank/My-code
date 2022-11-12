#include<stdio.h>
int main()
{
	int num,a[100],b[100],suma=0,sumb=1,in=0,ta,n,m,r;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d/%d",&a[i],&b[i]);//读入各个分数
	}
	for(int i=0;i<num;i++)
	{
		ta=sumb*a[i];
		sumb=sumb*b[i];
		suma=suma*b[i]+ta;//通分相加
		n=suma;
		m=sumb;
		while(n!=0)
		{
		r=m%n;
		m=n;
		n=r;	
		}//寻找最大公约数
		suma=suma/m;
		sumb=sumb/m;//约分
	}
	while(suma>=sumb)
	{
		in++;
		suma=suma-sumb;
	}
	if((suma==0)&&(in==0))
	{
		printf("0");
		return 0;
	}
	if(suma==0)
	printf("%d",in);
	else
	{
		if(in==0)
		printf("%d/%d",suma,sumb);
		else printf("%d %d/%d",in,suma,sumb);
	}
}
