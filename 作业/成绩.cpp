#include<stdio.h>
int main()
{
	int score;
	char grade;
	scanf("%d",&score);
	switch((int)(score/10))
	{
		case 10:
		case 9:grade='A';break;
		case 8:grade='B';break;
		case 7:grade='C';break;
		case 6:grade='D';break;
		default:grade='E';
	}
	printf("Your grade:%c\n",grade);
	return 0;
}
