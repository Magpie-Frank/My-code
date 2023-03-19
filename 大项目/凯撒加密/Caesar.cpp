#include<stdio.h>
#include<string.h>
#include<stdlib.h>
FILE *fp;
void jiemi(char password[],char key[]);
void jiami(char password[],char key[]);
int main()
{
	printf("选择操作：\n1.加密\n2.解密\n");
	int n=0,i=0;
	scanf("%d",&n);								//选择操作
	if((fp=fopen("input.txt","r"))==NULL)
	{
		printf("InputFailed!\n");
		exit(0);
	}
	char in[100000],key[100000];
	while((in[i]=fgetc(fp))!='#')
	{
		i++;
	}
	printf("请输入密钥：\n");
	scanf("%s",key);							//键入密钥
	if(n==1) jiami(in,key);
	if(n==2) jiemi(in,key);
	fp=fopen("input.txt","w+");
	fclose(fp);
	fp=fopen("output.txt","w+");
	for(int j=0;j<=i;j++)
	{
		fputc(in[j],fp);
	}
	fclose(fp);
	printf("操作完成！\n");
	system("pause");							//结束
	return 0;
}
void jiemi(char password[],char key[])			//解密函数
{
	int l=strlen(key),x=0,y=1,t,i=0;
	while(password[i]!='#')
	
	{
		if((password[i]>64&&password[i]<91)||(password[i]>96&&password[i]<123))
		{
			if(x==l) x=0;
			if(y==l) y=0;
			t=key[x]-key[y];
			if(password[i]>64&&password[i]<91)
			{
				if(password[i]+t>90) password[i]=64+t-(90-password[i]);
				else{
					if(password[i]+t<65) password[i]=91+t+(password[i]-65);
					else password[i]=password[i]+t;
				}
			}
			if(password[i]>96&&password[i]<123)
			{
				if(password[i]+t>122) password[i]=96+t-(122-password[i]);
				else{
					if(password[i]+t<97) password[i]=123+t+(password[i]-97);
					else password[i]=password[i]+t;
				}
			}
			i++;x++;y++;
		}
		else 
		{
			if(x==l) x=0;
			if(y==l) y=0;
			switch(password[i])
			{
				case '!': password[i]='1';break;
				case '@': password[i]='2';break;
				case ';': password[i]='3';break;
				case '$': password[i]='4';break;
				case '%': password[i]='5';break;
				case '^': password[i]='6';break;
				case '&': password[i]='7';break;
				case '*': password[i]='8';break;
				case '(': password[i]='9';break;
				case ')': password[i]='0';break;
			}
			i++;x++;y++;
		}

	}
}
void jiami(char password[],char key[])				//加密函数
{
	int l=strlen(key),x=0,y=1,t,i=0;
	while(password[i]!='#')							//'#'是结束标志
	
	{
		if((password[i]>64&&password[i]<91)||(password[i]>96&&password[i]<123))	//字母加密
		{
			if(x==l) x=0;
			if(y==l) y=0;
			t=key[y]-key[x];
			if(password[i]>64&&password[i]<91)									//大写字母加密
			{
				if(password[i]+t>90) password[i]=64+t-(90-password[i]);
				else{
					if(password[i]+t<65) password[i]=91+t+(password[i]-65);
					else password[i]=password[i]+t;
				}
			}
			if(password[i]>96&&password[i]<123)									//小写字母加密
			{
				if(password[i]+t>122) password[i]=96+t-(122-password[i]);
				else{
					if(password[i]+t<97) password[i]=123+t+(password[i]-97);
					else password[i]=password[i]+t;
				}
			}
			i++;x++;y++;
		}
		else 
		{
			if(x==l) x=0;
			if(y==l) y=0;
			switch(password[i])													//数字加密
			{
				case '!': password[i]='1';break;
				case '@': password[i]='2';break;
				case ';': password[i]='3';break;
				case '$': password[i]='4';break;
				case '%': password[i]='5';break;
				case '^': password[i]='6';break;
				case '&': password[i]='7';break;
				case '*': password[i]='8';break;
				case '(': password[i]='9';break;
				case ')': password[i]='0';break;
			}
			i++;x++;y++;
		}

	}
}
