#include<stdio.h>
int main()
{int max(int x,int y,int z);
	int a,b,c,k=0;
	scanf("%d,%d,%d",&a,&b,&c);
	k=max(a,b,c);
	printf("max=%d",k);
	return 0;
}
int max(int x,int y,int z)
{
	int i=0;
	if (x>=i)i=x;
	if (y>=i)i=y;
	if(z>=i)i=z;
	return i;
	
	
}
