#include<stdio.h>
int let=0,spa=0,num=0,def=0;
int data(char c)
{
	if(c==' ') spa++;
	if((c>='a')&&(c<='z')) let++;
	else
	if((c>='A')&&(c<='Z')) let++;
	else
	if((c>='0')&&(c<='9')) num++;
	else def++;
	
}
main()
{
	char c;
	while(scanf("%c",&c)!=EOF)
	data(c);
	printf("letter:%d\nspace:%d\nnumber:%d\ndefault:%d",let,spa,num,def);
}
