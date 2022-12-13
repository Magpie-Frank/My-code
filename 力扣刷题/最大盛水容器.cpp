#include<stdio.h>
int maxArea(int* height, int heightSize)
{
	int left=0,right=heightSize-1,size=0,max=0;
	while(left!=right)
	{
		if(height[left]>height[right])
		size=height[right]*(right-left);
		else size=height[left]*(right-left);
		if(size>max) max=size;
		if(height[left]>height[right])
			right--;
			else left++;	
	}
	return max;
}
int main()
{
	int height[50],size;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",height+i);
	}
	int max=maxArea(height,size);
	printf("%d",max);
	return 0;
}
