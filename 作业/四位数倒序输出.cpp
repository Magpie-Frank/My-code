#include<stdio.h>
int main()
{
	int arr[4],n,m;
	for(int i=0;i<=3;i++)
	arr[i]=0;
	scanf("%d",&n);
	printf("a为%d,",n);
	if((n<1000)||(n>9999))
	{
		printf("输入的数据有误!");
		return 0;
	}
	for(int i=0;i<=3;i++)
	{
		arr[i]=n%10;
		n=n/10;
	}
	printf("反序后：");
	for(int i=0;i<=3;i++)
	printf("%d",arr[i]);
	return 0;
}
