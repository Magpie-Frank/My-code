#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int l,n=0,a=0,b=0,arr[20],max,flag=0;
	int sushu(int x);
	scanf("%s",str);
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		for(int j=i;j<l;j++)
		{
			a=a*10;
			a=a+str[j]-48;
			b=sushu(a);
			if(b)
			{
				arr[n]=a;
				n++;
				flag=1;
			}
		}
		a=0;
	}
	if(flag==0)
	{
		printf("None");
		return 0;
	}
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("%d",max);
	return 0;
}
int sushu(int x)
{
	if(x==2)
	return 1;
	if(x<2)
	return 0;
	for(int k=2;k<x/2;k++)
	if(x%k==0)
	return 0;
	return 1;
}
