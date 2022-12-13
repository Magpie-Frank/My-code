#include<stdio.h>
double cal(int base,int flo,int out)
{
	return (base+flo-out);
}
int main()
{
	int n,base,flo,out;
	char s[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s);
		scanf("%d%d%d",&base,&flo,&out);
		printf("%s %.2lf\n",s,cal(base,flo,out));
	}
}
