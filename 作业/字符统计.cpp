#include<stdio.h>
int main()
{
	char t=0;
	int num=0,word=0,spa=0,def=0,tem=0;
	do{
		t=getchar();
		if(t=='\n')
		break;
		tem=t;
		if((tem>=65&&tem<=90)||(tem>=97&&tem<=122))
		word++;
		else {if(tem>=48&&t<=57)
			num++;
			else {if(tem==32)
				spa++;
				else def++;}
		}
	}while(t!='\n');
	printf("word %d\tnumber %d\tspace %d\tdefault %d\t",word,num,spa,def);
	return 0;
}
