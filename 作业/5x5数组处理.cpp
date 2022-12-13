#include<stdio.h>
void fun(int *p)
{
	int t;
	int dum[25];
	for(int i=0;i<25;i++)
	{
		dum[i]=i;
	}
	for(int i=0;i<24;i++)
		for(int j=i;j<25;j++)
		{
		 	if(p[dum[i]]>p[dum[j]])
		 	{
			 	t=dum[i];
			 	dum[i]=dum[j];
			 	dum[j]=t;
			}
		}
	int max=dum[0],min[4]={dum[21],dum[22],dum[23],dum[24]};
	t=p[12];
	p[12]=p[max];
	p[max]=t;
	//余下4角位置转换如上
}
int main()
{
	int matrix[25];
	for(int i=0;i<25;i++)
		scanf("%d",&matrix[i]);
	fun(matrix);
	return 0;
}
