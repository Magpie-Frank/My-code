#include "stdio.h"
#define N 10
#include "math.h"
int passway ( int n, int n1, int* pn )
{
	int n2=n-n1;
	if((n<0)||(n2>=n)||(n1>=n)) return 0;
	int t1=n1,t2=n2*3,min=t1+t2,t;
	for(int i=9;i>0;i--)
	{
		if(i>=n1)t1=1;
		else t1=n1/i;
		if(10-i>=n2)t2=3;
		else t2=n2*3/(10-i);
		t=t1+t2;
		if(min>t)
		{
			min=t;
			*pn=i;
		}
	}
	return min;
}
main()
{
    int n,n1,pn1;
    int time;
    scanf("%d %d",&n,&n1);
    time=passway(n,n1,&pn1);
    if(time>0)
      printf("%d %d %d",pn1,N-pn1,time);
    else
      printf("error!"); 
 } 

