#include<stdio.h>
int main()
{
	int d;
	printf("����������������\n");
	scanf("%d",&d);
	if(d<=5)
	printf("����Ӧ����2Ԫ");
	else{
		if(d<=10)
		printf("����Ӧ����5Ԫ");
		else{
			if(d<=30)
			printf("����Ӧ����10Ԫ");
			else{
				printf("����Ӧȡ��ͼ��ݻ�Ա�ʸ�");
			}
		}
	}
	return 0;
}
