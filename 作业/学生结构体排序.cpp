#include<stdio.h>
struct student{
	char num[10];
	float sc;
};
void read(struct student stu[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s",stu[i].num);
		scanf("%f",&stu[i].sc);
	}
}
void fun(struct student *sp[],int n)
{
	struct student *t;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(sp[i]->sc<sp[j]->sc)
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
		printf("%s %.1f\n",sp[i]->num,sp[i]->sc);
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
	write(sp,n);
}
