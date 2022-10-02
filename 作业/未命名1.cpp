#include <stdio.h>
int main()
{
	int max=1;
	int x=1;
	int y=1;
	int z=1;
	scanf("%d %d %d",&x,&y,&z);
	if (x>max )
	 max = x;
	if (y>max)  
	max=y;
	if (z>max)  
	max=z;
	printf("%d",max);
	return 0;
}
