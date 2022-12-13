#include<stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
	int suma[2000],i=0,j=0,n=nums1Size+nums2Size-2,c=0;
	while(c==n)
	{
		if(nums1[i]<nums2[j])
		{
			suma[c]=nums1[i];
			i++;
			c++;
		}
		else{
			suma[c]=nums2[j];
			j++;
			c++;
		}
	}
	double mid=0;
	if(n%2==0) mid=0.5*(suma[n/2]+suma[n/2+1]);
	else mid=suma[n/2+1];
	return mid;
}
