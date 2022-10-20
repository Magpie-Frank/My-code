#include<stdio.h>
#include<stdlib.h>
int i=0,j=0,hi=0,hj=0,n=0,m=0,sum=0;
int a[20][20];
int main()
{
	int tanlu(int x,int y);
	extern int a[20][20],i,j,n,m,hi,hj,sum;
	printf("请输入终点坐标:");
	scanf("%d,%d",&n,&m);
	printf("请输入马的坐标:");
	scanf("%d,%d",&hi,&hj);
	for(i=0;i<=n;i++)
		for(j=0;j<=m;j++)
		a[i][j]=1;//读入与初始化
	a[hi-2][hj-1]=0;
	a[hi-2][hj+1]=0;
	a[hi-1][hj-2]=0;
	a[hi-1][hj+2]=0;
	a[hi+1][hj+2]=0;
	a[hi+1][hj-2]=0;
	a[hi+2][hj-1]=0;
	a[hi+2][hj+1]=0;
	a[hi][hj]=0;//马的占位
	return 0;
}
int tanlu(int x,int y)
{
	extern int a[20][20],sum;
	if(tanlu(x,y+1)==0)
	return 0;
	if(tanlu(x+1,y)==0)
	return 0;//探路并返回
	if((x=n)&&(y=m))
	{
		sum++;
		return 0;
	}//递归终点
}
