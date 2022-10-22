#include<stdio.h>
int main()
{
	int a=0,i=0,c=1;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	    {
	    if(a%i==0)
	    {
		c=1;
	    break;
		}
	    else c=0;
		}
	if(c==0)
    printf("Yes");
    else printf("No");
    return 0;
}
