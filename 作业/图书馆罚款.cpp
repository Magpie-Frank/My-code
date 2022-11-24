#include<stdio.h>
int main()
{
	int d;
	printf("请输入延期天数：\n");
	scanf("%d",&d);
	if(d<=5)
	printf("此人应罚款2元");
	else{
		if(d<=10)
		printf("此人应罚款5元");
		else{
			if(d<=30)
			printf("此人应罚款10元");
			else{
				printf("此人应取消图书馆会员资格");
			}
		}
	}
	return 0;
}
