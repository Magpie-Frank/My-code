#include<stdio.h>
struct student{
	char num[10];
	float sc[3];
	float sum;
};
void read(struct student stu[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s",stu[i].num);
		for(int j=0;j<3;j++)
		{
			scanf("%f",&stu[i].sc[j]);
			stu[i].sum+=stu[i].sc[j];
		}
	}
}
void fun(struct student *sp[],int n)
{
	float ave;
	for(int i=0;i<3;i++)
	{
		ave=0;
		for(int j=0;j<n;j++)
		{
			ave+=sp[j]->sc[i];
		}
		printf("%d %.1f\n",i+1,ave/n);
	}
}
void write(struct student *sp[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s %.1f\n",sp[i]->num,sp[i]->sum);
	}
}
int main()
{
	struct student stu[50],*sp[50];
	for(int i=0;i<50;i++)
	{
		sp[i]=&stu[i];
	}
	int n;
	scanf("%d",&n);
	read(stu,n);
	fun(sp,n);
}
