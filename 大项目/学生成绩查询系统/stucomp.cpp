#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stu.h"
#include "stuinfo.h"
float level(int n)					//�ٷ���ת4����
{
	if(n>=90&&n<=100)
	return 4;
	else {
		if(n>=85&&n<=89)
		return 3.7;
		else {
			if(n>=82&&n<=84)
			return 3.3;
			else {
				if(n>=78&&n<=81)
				return 3.0;
				else {
					if(n>=75&&n<=77)
					return 2.7;
					else {
						if(n>=72&&n<=74)
						return 2.3;
						else {
							if(n>=68&&n<=71)
							return 2.0;
							else {
								if(n>=64&&n<=67)
								return 1.5;
								else {
									if(n>=60&&n<=63)
									return 1.0;
									else {
										if(n<60&&n>=0)
										return 0;
										else return -1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
void sort(struct student* sp[],int n)				//������
{
	struct student *t;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(sp[i]->gpa<sp[j]->gpa)
			{
				t=sp[i];
				sp[i]=sp[j];
				sp[j]=t;
			}
		}
}

int main()
{
	struct student stu[50],*sp[50];
	for(int i=0;i<50;i++)							//�����ʼ��
	{
		sp[i]=&stu[i];
		stu[i].sum=0;
		stu[i].gpa=0;
	}
	int n=read(stu);					//��ȡ
	sort(sp,n);							//����
	write(sp,n);						//���
}
