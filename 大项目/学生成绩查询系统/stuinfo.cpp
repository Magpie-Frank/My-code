#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stucomp.h"
FILE *fp;
void write(struct student *sp[],int n)
{
	fp=fopen("stusorted.dat","w+");
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"%s %s %.2f\n",sp[i]->id,sp[i]->name,sp[i]->gpa);		//输出学生信息
	}
	fclose(fp);
}
int read(struct student stu[])
{
	if((fp=fopen("stuscore.dat","r"))==NULL)
	{
		printf("InputError!\n");
		exit(0);
	}
	int sub[3],n=0;
	fscanf(fp,"%d%d%d",sub,sub+1,sub+2);			//读入各科学分
	int sum=0;
	sum+=sub[1]+sub[2]+sub[0];
	char t1[20],t2[20];
	
	while(1)										//读入学生信息，以-1为结束标志
	{
		fscanf(fp,"%s",t1);
		if(strcmp(t1,"-1")==0)
		break;
		fscanf(fp,"%s",t2);
		strcpy(stu[n].id,t1);
		strcpy(stu[n].name,t2);
		for(int j=0;j<3;j++)
		{
			fscanf(fp,"%d",&stu[n].sc[j]);
			stu[n].gpa+=level(stu[n].sc[j])*sub[j];
		}
		stu[n].gpa=stu[n].gpa/sum;
		n++;
	}
	fclose(fp);
	for(int i=0;i<n;i++)
	{
		printf("%s %s %d %d %d\n",stu[i].id,stu[i].name,stu[i].sc[0],stu[i].sc[1],stu[i].sc[2]);//在屏幕上输出
	}
	system("pause");
	return n;
}
