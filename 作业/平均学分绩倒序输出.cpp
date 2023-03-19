#include<stdio.h>
#include<string.h>
struct student{
	char num[10];
	float gpa;
	int sum;
};
float level(int n)
{
	if(n>=90&&n<=100)
	return 4;
	else {
		if(n>=85&&n<=89)
		return 3.7;
		else {
			if(n>=82&&n<=84)
			return 3.3;
			else {
				if(n>=78&&n<=81)
				return 3.0;
				else {
					if(n>=75&&n<=77)
					return 2.7;
					else {
						if(n>=72&&n<=74)
						return 2.3;
						else {
							if(n>=68&&n<=71)
							return 2.0;
							else {
								if(n>=64&&n<=67)
								return 1.5;
								else {
									if(n>=60&&n<=63)
									return 1.0;
									else {
										if(n<60&&n>=0)
										return 0;
										else return -1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
int read(struct student *sp[])
{
	char t[10];
	int n=0,flag,sc,p;
	while(1)
	{
		scanf("%s",t);
		if(strcmp(t,"-1")==0)
		break;
		flag=1;
		for(int i=0;i<n;i++)
		{
			if(strcmp(t,sp[i]->num)==0)
			{
				flag=0;
				scanf("%d%d",&sc,&p);
				sp[i]->gpa+=level(sc)*p;
				sp[i]->sum+=p;
				break;
			}
		}
		if(flag)
		{
			strcpy(sp[n]->num,t);
			scanf("%d%d",&sc,&p);
			sp[n]->gpa+=level(sc)*p;
			sp[n]->sum+=p;
			n++;
		}
		for(int i=0;i<10;i++)
		t[i]='\0';
	}
	for(int i=0;i<n;i++)
	{
		if(sp[i]->sum!=0)
		sp[i]->gpa=sp[i]->gpa/sp[i]->sum;
	}
	return n;
}
void fun(struct student *sp[],int n)
{
	struct student *t;
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(sp[i]->gpa<sp[j]->gpa)
			{
				t=sp[i];
				sp[i]=sp[j];
				sp[j]=t;
			}
		}
}
void write(struct student *sp[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s %.2f\n",sp[i]->num,sp[i]->gpa);
	}
}
int main()
{
	int n;
	struct student stu[50],*sp[50];
		for(int i=0;i<50;i++)
		{
			sp[i]=&stu[i];
			stu[i].sum=0;
			stu[i].gpa=0;
		}
	n=read(sp);
	fun(sp,n);
	write(sp,n);
}
