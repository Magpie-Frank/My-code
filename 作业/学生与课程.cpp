
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
	
	printf("请输入学号和成绩：\n");
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
 
//求第一门成绩的平均分 
int fun1(float (*p)[6])
{
	float sum = 0.0;
	int i;
	
	for(i = 0;i < 4;i++)
	{
		sum += *(*(p + i) + 1);
	}
	
	printf("平均分是：%f\n",sum/4);
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
			printf("学号为%f的学生有超过两门成绩不合格\n",*(*(p + i) + 0));
			
			printf("成绩有:\n");
			for(j = 1;j < 6;j++)
			{
				printf("%f ",*(*(p + i) + j));
			}
			
			printf("\n平均成绩是：%f\n",sum/5);
			flag = 1;
		}
	}
	
	if(flag == 0)
	{
		printf("未找到！\n"); 
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
			printf("符合条件3的学生有%f\n",*(*(p + i) + 0));
		}
	}
}
