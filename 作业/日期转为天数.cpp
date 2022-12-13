#include<stdio.h>
struct date
	{int year;int month;int day;};
int gap(int x)
{
	if(x%100==0)
	{
		if(x%400==0) return 1;
		else return 0;
	}
	if(x%4==0)
	return 1;
	else return 0;
}
int main()
{
	struct date n={0,0,0},*p=&n;
	scanf("%d%d%d",&n.year,&n.month,&n.day);
	int flag=gap(n.year);
	int sum=0;
	sum+=n.day;
	n.month--;
	for(;n.month>0;n.month--)
	{
		switch(n.month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:sum+=31;break;
			case 4:
			case 6:
			case 9:
			case 11:sum+=30;break;
			case 2:sum+=flag? 29:28;break;
		}
	}
	printf("%d",sum);
}
