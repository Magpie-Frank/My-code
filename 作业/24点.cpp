#include <stdio.h>
#define N 4
// �������ȼ���ʽ 
static double first(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3);

static double second(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3);

static double third(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3);

static double four(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3);

static double fifth(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3);

static int random_symbols(int all[], char opt[]);

static double compute(double num1, double num2, int opt);



int main()
{
	int num[N];
	char opt[N] = {'+', '-', '*', '/'};
	int i, j, k, g;
	// �������4����
	for(i = 0;i < N;i++)
	{
		scanf("%d", &num[i]);
		if(num[i] > 13 || num[i] < 1)
		{
			return 1;
		}
	 } 
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			if(i == j) continue;
			for(k = 0;k < N;k++)
			{
				if(k == i || k == j) continue;
				for(g = 0;g < N;g++)
				{
					if(g == i || g == j || g == k) continue;
					//  ��ʱ�õ��˲��ظ��������4����������� 
					int all[N] = {num[i], num[j], num[k], num[g]};
					int value = random_symbols(all, opt);
					// ���鴫��ʵ��ʱֻд������ 
					if(value == 1)
					{
						return 0;
					}
				}
			}
		}
	}
	printf("-1");
	// ����޽��򷵻�-1 
	return 0;
}

// ���鴫���β��ڱ��������[] 
static int random_symbols(int all[], char opt[])
{
	int i, j, k, g;
	double sum = 0;
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			for(k = 0;k < N;k++)
			{
				sum =  first(all[0], all[1], all[2], all[3], i, j, k);
				 //((A opt B) opt C) opt D
				if(sum == 24)
				{
					printf("((%d%c%d)%c%d)%c%d", all[0], opt[i], all[1], opt[j], all[2], opt[k], all[3]);
					return 1;
				}
				//(A opt (B opt C)) opt D
				sum = second(all[0], all[1], all[2], all[3], i, j, k);
				if(sum == 24)
				{
					printf("(%d%c(%d%c%d)%c%d)", all[0], opt[i], all[1], opt[j], all[2], opt[k], all[3]);
					return 1;
				}
				//A opt (B opt (C opt D))
				sum = third(all[0], all[1], all[2], all[3], i, j, k);
				if(sum == 24)
				{
					printf("%d%c(%d%c(%d%c%d))", all[0], opt[i], all[1], opt[j], all[2], opt[k], all[3]);
					return 1;
				}
				//A opt ((B opt C) opt D)
				sum = four(all[0], all[1], all[2], all[3], i, j, k);
				if(sum == 24)
				{
					printf("%d%c((%d%c%d)%c%d)", all[0], opt[i], all[1], opt[j], all[2], opt[k], all[3]);
					return 1;
				}
				//(A opt B) opt (C opt D)
				sum = fifth(all[0], all[1], all[2], all[3], i, j, k);
				if(sum == 24)
				{
					printf("(%d%c%d)%c(%d%c%d)", all[0], opt[i], all[1], opt[j], all[2], opt[k], all[3]);
					return 1;
				}
			}
		}
	}
	return 0;
}


// 0, 1, 2, 3  �ֱ���� �Ӽ��˳� 
static double compute(double num1, double num2, int opt)
{
	double sum1;
	if(opt == 0)
	{
		sum1 = num1 + num2;
	}
	if(opt == 1)
	{
		sum1 = num1 - num2;
	}
	if(opt == 2)
	{
		sum1 = num1 * num2;
	}
	if(opt == 3)
	{
		sum1 = num1 / num2;
	}
	return sum1;
}
/* �ĸ����������������������������ţ����������ּ���ģʽ

 1. ((A opt B) opt C) opt D
 2. (A opt (B opt C)) opt D 
 3. A opt (B opt (C opt D)) 
 4. A opt ((B opt C) opt D) 
 5. (A opt B) opt (C opt D)  */
// ��һ��  
static double first(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3)
{
	//((A opt B) opt C) opt D
	double r1, r2, r3;
	r1 = compute(num1, num2, opt1);
	r2 = compute(r1, num3, opt2);
	r3 = compute(r2, num4, opt3);
	return r3;
}


//�ڶ��� 
static double second(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3)
{
	//(A opt (B opt C)) opt D
	double r1, r2, r3;
	r1 = compute(num2, num3, opt2);
	r2 = compute(num1, r1, opt1);
	r3 = compute(r2, num4, opt3);
	return r3;
}


//������ 
static double third(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3)
{
	//A opt (B opt (C opt D))
	double r1, r2, r3;
	r1 = compute(num3, num4, opt3);
	r2 = compute(num2, r1, opt2);
	r3 = compute(num1, r2, opt1);
	return r3;
}



//������ 
static double four(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3)
{
	//A opt ((B opt C) opt D) 
	double r1, r2, r3;
	r1 = compute(num2, num3, opt2);
	r2 = compute(r1, num4, opt3);
	r3 = compute(num1, r2, opt1);
	return r3;
}



//������ 
static double fifth(double num1, double num2, double num3, double num4, int opt1, int opt2, int opt3)
{
	//(A opt B) opt (C opt D)
	double r1, r2, r3;
	r1 = compute(num1, num2, opt1);
	r2 = compute(num3, num4, opt3);
	r3 = compute(r1, r2, opt2);
	return r3;
}
