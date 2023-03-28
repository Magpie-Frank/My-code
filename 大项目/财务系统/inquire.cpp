#include<stdio.h>
#include <string.h>
extern FILE *fp;
extern void menu();
struct accounts 
{
	double x;
	int year;
	int mon;
	int day;
	char tap[100];
}a;
void search()
{
	int n1,y1,r1;
	int n2,y2,r2;
	double sum=0;
	printf("请输入起止日期（格式：年.月.日）\n");
	scanf("%d.%d.%d",&n1,&y1,&r1);
	scanf("%d.%d.%d",&n2,&y2,&r2);
	if(n1>n2)
	{
		printf(" fail to enter!");
		search();
	}
	fp = fopen("accounts.xls", "a+");
	if (fp == NULL)
	{
		printf("fp is fail\n");
		menu();
	}
	while(1)
	{
		fscanf(fp, "%d.%d.%d\t%lf\t%s", &a.year,&a.mon,&a.day, &a.x,a.tap);
		if(a.year>n1&&a.year<n2)
		sum+=a.x;
		else if(a.year==n1)
		{
			if(a.mon>y1)
			sum+=a.x;
			else if(a.mon==y1)
			{
				if(a.day>=r1)
				sum+=a.x;
			}
		}
		else if(a.year==n2)
		{
			if(a.mon<y2)
			sum+=a.x;
			else if(a.mon==y2)
			{
				if(a.day<=r2)
				sum+=a.x;
			}
		}
		if(a.year>n2)
		break;
		else if(a.year==n2)
		{
			if(a.mon>y2)
			break;
			else if(a.mon==y2)
			{
				if(a.day>r2)
				break;
			}
		}
	}
    printf("总收支为%.2lf\n",sum);
    fclose(fp);
	return;
}
