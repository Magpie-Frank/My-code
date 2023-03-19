#include<stdio.h>
struct stu{
	char num[10];
	float sc;
};
int main()
{
	struct stu s[50];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i].num);
		scanf("%f",&s[i].sc);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s %.1f\n",s[i].num,s[i].sc);
	}
	return 0;
}
