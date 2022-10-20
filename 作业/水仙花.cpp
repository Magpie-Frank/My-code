#include<stdio.h>
#include<math.h>
int main()
{
	int n1=0,n2=0,n3=0,num=0,fl=0;
	scanf("%d",&num);
	if((num<100)||(num>999))
	{
		printf("Invalid Value.");
		return 0;
	}
	n1=num/100;
	n2=num/10%10;
	n3=num%10;
	fl=pow(n1,3)+pow(n2,3)+pow(n3,3);
	if(fl==num)
	printf("Yes");
	else printf("No");
	return 0;
}
