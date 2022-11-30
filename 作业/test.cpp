#include<stdio.h>
#define N 10

int main()
{
	int peopleNum[10];
	int totalNum = 10;
	int restNum = 0;
	int count = 0;
	int n=0;
	scanf("%d",&n);

	for (int i = 0; i < totalNum; i++)
	{
		peopleNum[i] = i + 1;
	}

	restNum = totalNum;

	while (restNum>1)
	{
		int* curNum = peopleNum;
		while (curNum<peopleNum+totalNum)
		{
			if (*curNum!=0)
			{
				count++;
				if (count==n)
				{
					*curNum = 0;
					count = 1;
					restNum--;
					printf("%-3d",curNum-peopleNum+1);
				}
			}
			curNum++;
		}
	}


}

