#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	scanf("%c",&c);
	scanf("%d",&b);
	int ans=0;
	switch(c)
	{
		case '+':ans=a+b;break;
		case '-':ans=a-b;break;
		case '*':ans=a*b;break;
		default:printf("error");return 0;break;
	}
	printf("%d",ans);
}
