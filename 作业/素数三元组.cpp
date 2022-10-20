#include<stdio.h>
int main()
{
	int sushu(int x);
	int m=0,n=0,p=0,q=0,r=0,b=1,sum=0,t=0;
	int a[1000];
	for(r=0;r<=1000;r++)
	a[r]=0;
	scanf("%d %d",&m,&n);
	for(r=m;r<=n;r++)
	{
		if(r<=1)
		continue;
		b=sushu(r);
		if(b!=0)
		{
			a[t]=r;
			t++;
		}
	}
	for(p=0;p<=t-2;p++)
		for(q=p+1;q<=t-1;q++)
			for(r=q+1;r<=t;r++)
			{
				b=sushu(a[p]*a[q]+a[r]);
				if(b==0)
				continue;
				b=sushu(a[p]*a[r]+a[q]);
				if(b==0)
				continue;
				b=sushu(a[q]*a[r]+a[p]);
				if(b==0)
				continue;
				sum++;
			}
	printf("%d",sum);
	return 0;
}
int sushu(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		return 0;//ÅĞ¶ÏËØÊı
	}
	return 1;
}
