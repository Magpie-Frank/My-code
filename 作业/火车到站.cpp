#include<stdio.h>
int main()
{
	int a,l;
	scanf("%d %d",&l,&a);
	int l1,l2,a1,a2,m1,m2;
	l1=l/100;
	l2=l%100;
	a1=a/100;
	a2=a%100;
	m1=a1-l1;
	if(a2>=l2)
	m2=a2-l2;
	else 
	{
		m2=a2+60-l2;
		m1--;
	}
	int min1,min2,sec1,sec2;
	if (m1<10)
	{
		min1=0;
		min2=m1;
	}
	else
	{
		min1=m1/10;
		min2=m1%10;
	}
	if (m2<10)
		{
			sec1=0;
			sec2=m2;
		}
	else
		{
			sec1=m2/10;
			sec2=m2%10;
		}
		printf("%d%d:%d%d",min1,min2,sec1,sec2);
	return 0;	
}
