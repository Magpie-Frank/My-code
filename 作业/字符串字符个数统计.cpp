#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001],t;
	int i=0;
	while((t=getchar())!='#')
	{
		if((t<'9')&&(t>'0'))
		i++;
	}
	printf("n=%d",i);
	return 0;
}
