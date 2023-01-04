#include<stdio.h>
int main()
{
	char a[1001],t;
	int i=0,x,max=0,flag=0;
	while((t=getchar())!='#')
	{
		a[i]=t;
		i++;
	}
	a[i]='\0';
	if(a[0]<'9'&&a[0]>'0') x=a[0]-48;
	for(int j=1;j<i;j++)
	{
		if(a[j]<'9'&&a[j]>'0')
		{
			x=x*10+a[j]-48; flag=1;
			if(x>max) max=x;
		}
		else x=0;
	}
	if(!flag)
	{
		printf("none");
		return 0;
	}
	printf("%d",max);
	return 0;
}
