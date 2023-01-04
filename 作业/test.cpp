#include <stdio.h>
#include<string.h>
int main()
{
int a[2][2];
int (*p1)[2],(*p2)[2];
p1=a;p2=a[0];
if(p1==p2)printf("yes");
else printf("no");
	
}
