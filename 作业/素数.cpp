#include<stdio.h>
int main()
{
	int a,i,c=0;
	scanf("%d",&a);
	for(i=2;i<a;i++);
	    {
	    if(a%i==0)
	    c=1;
	    else c=0;
		}
	if(c=0)
    printf("%d������",a);
    else printf("%d��������",a);
    return 0;
}
