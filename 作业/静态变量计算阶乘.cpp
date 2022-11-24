#include<stdio.h>
double fact_s(int n);
int main()
{
    int i,n;
    printf("Input n:");
    scanf("%d",&n);
  for(i=1;i<=n;i++)
  printf("%3d!=%.0f\n",i,fact_s(i));
  return 0;
}    
double fact_s(int n)
{
	int out();
    static double f=1;
    f=f*n;
    out();
    return f;
}
int out()
{
	printf("12345");
	return 1;
}
