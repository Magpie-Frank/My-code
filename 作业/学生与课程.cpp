
#include <stdio.h>

int main()
{
	int fun1(float (*p)[6]);
	int fun2(float (*p)[6]);
	int fun3(float (*p)[6]);
	float a[4][6];
	int i,j;
	float (*p)[6];
	p = a;
	
	printf("������ѧ�źͳɼ���\n");
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 6;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	fun1(p);
	fun2(p);
	fun3(p);
 } 
 
//���һ�ųɼ���ƽ���� 
int fun1(float (*p)[6])
{
	float sum = 0.0;
	int i;
	
	for(i = 0;i < 4;i++)
	{
		sum += *(*(p + i) + 1);
	}
	
	printf("ƽ�����ǣ�%f\n",sum/4);
}


int fun2(float (*p)[6])
{
	int i,j,n,flag = 0;
	float sum;
	
	for(i = 0;i< 4;i++)
	{
		n = 0;
		sum = 0.0;
		for(j = 1;j < 6;j++)
		{
			if(*(*(p + i) + j) < 60)
			{
				n ++;
			}
			sum += *(*(p + i) + j); 
		}
		if(n >= 2)
		{
			printf("ѧ��Ϊ%f��ѧ���г������ųɼ����ϸ�\n",*(*(p + i) + 0));
			
			printf("�ɼ���:\n");
			for(j = 1;j < 6;j++)
			{
				printf("%f ",*(*(p + i) + j));
			}
			
			printf("\nƽ���ɼ��ǣ�%f\n",sum/5);
			flag = 1;
		}
	}
	
	if(flag == 0)
	{
		printf("δ�ҵ���\n"); 
	}
}


int fun3(float (*p)[6])
{
	int i,j,n;
	float sum;
	
	for(i = 0;i < 4;i++)
	{
		sum = 0.0;
		n = 0;
		for(j = 1;j < 6;j++)
		{
			if(*(*(p + i) + j) >= 85)
			{
				n++;
			}
			sum += *(*(p + i) + j);
		}
		if(sum / 5 >= 90 || n == 5)
		{
			printf("��������3��ѧ����%f\n",*(*(p + i) + 0));
		}
	}
}
