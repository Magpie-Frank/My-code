#include<stdio.h>
int main()
{
	int la,lb;
	char pa[11],pb[11];
	for(int i=0;i<=12;i++)
	{
		scanf("%c",&pa[i]);
		if(pa[i]==' ')
		{
			pa[i]='\0';
			break;
		}	//TODO
	}
	scanf("%s",&pb);
	la=sizeof(pa)-1;
	lb=sizeof(pb)-1;
	
	return 0;
}
