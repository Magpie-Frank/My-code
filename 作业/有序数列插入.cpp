#include <stdio.h>
#define N 10
int FindIndex(int a[],int num)
{
	for(int i=0;i<N;i++)
	{
		if(num<a[i])
		return i+1;
	}
}
main()
{
    int num;
    int a[N]={1,3,5,7,9,11,18,20,30,78};
    scanf("%d",&num);
    int insert=FindIndex(a,num);
    printf("%d",insert);
}

