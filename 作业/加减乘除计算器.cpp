#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d",&a);
	scanf("%c",&c);
	scanf("%d",&b);
	int ans=0,x=0;
	switch(c)
	{
		case '+':ans=a+b;printf("%d",ans);break;
		case '-':ans=a-b;printf("%d",ans);break;
		case '*':ans=a*b;printf("%d",ans);break;
		case '/':ans=a/b;if(ans*b!=a) x=a-ans*b;printf("%d...%d",ans,x);break;
		default:printf("error");return 0;break;
	}
}
