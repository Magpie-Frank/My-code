#include<stdio.h>
#include<stdlib.h>
float level(int n)
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
int main()
{
	int sc;
	scanf("%d",&sc);
	float l=level(sc);
	if(l>0) printf("%.1f",l);
	else {
		if(l==0) printf("0");
		else{
			if(l==-1) printf("-1");
		}
	}
}
