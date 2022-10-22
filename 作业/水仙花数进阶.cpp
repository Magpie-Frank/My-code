#include<stdio.h>
#include<math.h>
int main()
{
	int sxh(int num);
	int b=0,n=0,m=0,i=0,t=0;
	do{
		n=0;m=0;
		scanf("%d %d",&n,&m);
		for(i=n;i<=m;i++)
		{
			b=sxh(i);
			switch(b)
			{
				case 1: printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",i,i/100,i/100,i/100,i/10%10,i/10%10,i/10%10,i%10,i%10,i%10);t=1;break;
				case 0: break;
			}
		}
		if(t==0)
		printf("none\n");
	}while(n!=0);
	return 0;
}
int sxh(int num)
{
		int n1=0,n2=0,n3=0,fl=0;
		if((num<100)||(num>999))
			return 0;
		n1=num/100;
		n2=num/10%10;
		n3=num%10;
		fl=pow(n1,3)+pow(n2,3)+pow(n3,3);
		if(fl==num)
		return 1;
		else return 0;
}
