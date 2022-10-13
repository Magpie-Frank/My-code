#include<stdio.h>
int main()
{
	int n,i;
	float t;
	int data[21][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&data[i][0],&data[i][1]);
		t=(data[i][0]-100)*1.8;
		if(data[i][1]>=1.1*t)
		data[i][2]=2;
		else 
			{
			if (data[i][1]<=0.9*t)
			data[i][2]=1;
			else data[i][2]=0;
			}
	}
	for(i=0;i<n;i++)
	{
		printf("You are ");
		if (data[i][2]==0)
			printf("wan mei!\n");
		if (data[i][2]==2)
			printf("tai pang le!\n");
		if (data[i][2]==1)
			printf("tai shou le!\n");
	}
	return 0;
}
