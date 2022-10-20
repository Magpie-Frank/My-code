#include<stdio.h>
int main()
{
	int score,g;
	scanf("%d",&score);
	g=score/10;
	switch (g) {
		case 6:
			printf("D");
			break;
		case 7:
			printf("C");
			break;
		case 8:
			printf("B");
			break;
		case 9:
			printf("A");
			break;
		case 10:
			printf("A");
			break;
		default:
			printf("E");
			break;
	}
	return 0;
}
