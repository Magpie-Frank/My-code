#include<stdio.h>
#include<string.h>
int main()
{
	char a[6];
	scanf("%s",a);
	int l,i;
	l=strlen(a);
	printf("它是%d位数",l);
	printf("\n");
	for(i=0;i<l;i++)
		printf("%c ",a[i]);
	printf("\n");
	for(i=l-1;i>=0;i--)
		printf("%c",a[i]);
	return 0;
}
