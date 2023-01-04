#include<stdio.h>
int main()
{
	int a[4],s1,s2,s3,f=0;
	for(int i=0;i<4;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j==i)continue;
			for(int n1=0;n1<4;n1++)
			{
				
				switch(n1)
				{
					case 0:s1=a[j]+a[i];
					case 1:s1=a[j]-a[i];
					case 2:s1=a[j]*a[i];
					case 3:s1=a[j]/a[i];
				}
				for(int k=0;k<4;k++)
				{
					if(k==i||k==j)continue;
					for(int n2=0;n2<4;n2++)
					{
						
						switch(n2)
						{
							case 0:s2=s1+a[k];
							case 1:s2=s1-a[k];
							case 2:s2=s1*a[k];
							case 3:s2=s1/a[k];
						}
						for(int l=0;l<4;l++)
						{
							if(l==k||l==j||l==i)continue;
							for(int n3=0;n3<4;n3++)
							{
								
								switch(n3)
								{
									case 0:s3=s2+a[k];
									case 1:s3=s2-a[k];
									case 2:s3=s2*a[k];
									case 3:s3=s2/a[k];
								}
								if(s3==24)
								{
									f=1;
									printf("((%d",a[i]);
									switch(n1)
									{
										case 0:printf("+");
										case 1:printf("-");
										case 2:printf("*");
										case 3:printf("/");
									}
									printf("%d)",j);
									switch(n2)
										{
										case 0:printf("+");
										case 1:printf("-");
										case 2:printf("*");
										case 3:printf("/");
										}
									printf("%d)",k);
									switch(n3)
									{
										case 0:printf("+");
										case 1:printf("-");
										case 2:printf("*");
										case 3:printf("/");
									}
									printf("%d",l);
								}
							}
						}
					}
				}
			}
		}
	}
	if(f==0) printf("-1");
	return 0;
}
