#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "timepin.h"
FILE *fp;
void write()
{
	fp=fopen("accounts.xls","a+");
	double ac;
	char tip[100],x;
	printf("请逐行录入收支和备注，结束录入请输入#\n");
	getchar();
	while(1)
	{
		scanf("%c",&x);
		if(x=='#')
		{
			break;
		}
		scanf("%lf %s",&ac,tip);
		getchar();
		struct tm t=timepin();
		fprintf(fp,"%d.%d.%d\t%c%lf\t%s\n",t.tm_year+1900,t.tm_mon+1,t.tm_mday,x,ac,tip);
	}
	fclose(fp);
}
