#include<stdio.h>
int main()
{
	int err,cor;
	scanf("%d",&err);
	int err1,err2;
	err1=err/16;
	err2=err%16;
	cor=err1*10+err2;
	printf("%d",cor);
	return 0;
}
