#include<stdio.h>
int main()
{
	for(int i=1;i<=98;i++)
		if(i*2+(98-i)*4==386)
		{
			printf("chicken:%d\nrabbit:%d",i,98-i);
			return 0;
		}
	return 0;
}
