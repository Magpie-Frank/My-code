#include<stdio.h>
int main()
{
	char a[1001],t;
	int i=0;
	while((t=getchar())!='#')
	{
		a[i]=t;
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
