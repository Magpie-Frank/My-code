#include<stdio.h>
int main()
{
	int arr[4],n,m;
	for(int i=0;i<=3;i++)
	arr[i]=0;
	scanf("%d",&n);
	printf("aΪ%d,",n);
	if((n<1000)||(n>9999))
	{
		printf("�������������!");
		return 0;
	}
	for(int i=0;i<=3;i++)
	{
		arr[i]=n%10;
		n=n/10;
	}
	printf("�����");
	for(int i=0;i<=3;i++)
	printf("%d",arr[i]);
	return 0;
}
