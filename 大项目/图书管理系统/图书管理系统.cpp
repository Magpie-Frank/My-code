#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <direct.h>
#include <iostream>
#include <sys/stat.h>
FILE *fp;
char* Ad(const char* user,const char* menu,const char* s);
void UserLogin();
void Register();
void Service();
void UserMenu(char* name);
void AdminLogin();
void AdminMenu();
void CreateUserFolder(char* n);
void BookIn();
void BookOut();
int main()
{
	
	if((fp=fopen("./Initialize/ini.txt","w+"))==NULL)
	{
		printf("Failed Initialize");
		system("pause");
		exit(0);
	}												
	fclose(fp);
	for(int i=0;i<50;i++)
		printf("*");
	printf("\n");
	for(int i=0;i<15;i++)
		printf(" ");
	printf("欢迎使用图书管理系统\n");
	for(int i=0;i<50;i++)
		printf("*");	
	printf("\n");									
	Service();
}
char* Ad(const char* user,const char* menu,const char* s)
{
	static char ad[100];
	for(int i=0;i<100;i++)
		ad[i]='\0';
	strcpy(ad,menu);
	strcat(ad,user);
	strcat(ad,"/");
	strcat(ad,s);
	strcat(ad,".dat");
	return ad;
}
void UserLogin()
{
	printf("#学号：\n");
	char pw[50];
	static char username[15];
	int n;
	for(int i=0;i<15;i++)
	username[i]='\0';
	scanf("%s",username);
	if((fp=fopen(Ad(username,"./Users/","pw"),"r"))==NULL)
	{
		printf("#用户名不存在！是否注册新用户？\n");
		printf("#1.是，注册新用户\n#0.否，返回主菜单\n");
		scanf("%d",&n);
		if(n==1) Register();
		if(n==0) Service();                                 //验证用户名
	}
	fscanf(fp,"%s",pw);
	fclose(fp);
	char pw1[50];
	printf("#密码：\n");
	scanf("%s",pw1);
	if(strcmp(pw,pw1)==0)
		UserMenu(username);
	else {
			printf("#密码错误！\n");
			printf("#你可以：\n");
			printf("#1.重试\n#0.返回主菜单\n");
			scanf("%d",&n);
			if(n==0) Service();
			if(n==1) UserLogin();                          //验证密码       
		}
}
void Service()
{
	void UserLogin(),Register(),Admin();
	printf("#请输入序号选择服务：\n");
		printf("#1.用户登录\n");
		printf("#2.新用户注册\n");
		printf("#9.管理员登录\n");
		printf("#0.退出程序\n");
		int service;
		scanf("%d",&service);
		switch(service)
		{
			case 1:UserLogin();break;
			case 2:Register();break;
			case 9:AdminLogin();break;
			case 0:printf("#谢谢使用\n");exit(0);
			default:printf("Service not found!");Service();
		}
}
void UserMenu(char* name)
{
	int UserOut(char* name),UserIn(char* name);
	printf("#请选择服务：\n");
	printf("#1.借书\n#2.还书\n#0.返回\n");
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:UserOut(name);break;
		case 2:UserIn(name);break;
		case 0:Service();break;
		default:printf("#ERROR!\n");system("pause");UserMenu(name);
	}
	return;
}
void UserOut(char* name)
{
	printf("#请输入书籍序列号：\n");
	char book[20],ad1[50]="./Data/";
	int n;
	scanf("%s",book);
	strcat(ad1,book);
	strcat(ad1,".dat");
	if((fp=fopen(ad1,"r"))==NULL)
	{
		printf("#未找到书籍！\n#您可以：\n#1.重试\n#0.返回\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: UserOut(name);break;
			case 0: UserMenu(name);break;
		}
	}
	int x;
	fscanf(fp,"%d",&x);
	if(x<1)
	{
		printf("#该书无库存！\n#您可以：\n#1.重试\n#0.返回\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: UserOut(name);break;
			case 0: UserMenu(name);break;
			default:printf("#ERROR!\n");exit(0);break;
		}
	}
	else
	{
		fp=fopen(ad1,"w+");
		fprintf(fp,"%d",x-1);
		fclose(fp);
		char ad2[50];
		strcpy(ad2,Ad(name,"./Users/","bk"));
		if((fp=fopen(ad2,"r"))==NULL)
		{
			fp=fopen(ad2,"w");
			fprintf(fp,"%s\n",book);
			printf("#借阅成功！\n");
			UserMenu(name);
		}
		char book2[20];
		if((x=fscanf(fp,"%s",book2))!=EOF)
		{
			printf("#无法借阅！\n#以下书籍尚未归还：\n#%s\n",book2);
			system("pause");
			UserMenu(name);
		}
		
	}
	return;
}
void UserIn(char* name)
{
	printf("#请输入书籍序列号：\n");
	char book[20],ad[50];
	scanf("%s",book);
	strcpy(ad,Ad(name,"./Users/","bk"));
	if((fp=fopen(ad,"r"))==NULL)
	{
		printf("#ERROR!\n");
		system("pause");
		UserMenu(name);
	}
	char book1[20];
	fscanf(fp,"%s",book1);
	if(strcmp(book,book1)==0)
	{
		fp=fopen(ad,"w+");
		fclose(fp);
		char bookad[50]="./Data/";
		strcat(bookad,book);
		strcat(bookad,".dat");
		fp=fopen(bookad,"r");
		int n;
		fscanf(fp,"%d",&n);
		fp=fopen(bookad,"w+");
		fprintf(fp,"%d",n+1);
		fclose(fp);
		printf("#还书成功！\n");
		system("pause");
		UserMenu(name);
	}
	else{
		fclose(fp);
		printf("#未找到书籍！\n#您可以：\n#1.重试\n#0.返回");
		int x;
		scanf("%d",&x);
		switch(x)
		{
			case 1: UserIn(name);break;
			case 0: UserMenu(name);break;
			default: printf("#ERROR!");system("pause");UserMenu(name);break;
		}
	}
	return;
}
void AdminLogin()
{
	printf("#请输入管理员密码：\n");
	if((fp=fopen("./Users/0000000000/pw.dat","r"))==NULL)
	{
		printf("error");
		system("pause");
		exit(0);
	}
	char pw[50],pw1[50];
	fscanf(fp,"%s",pw);
	fclose(fp);
	scanf("%s",pw1);
	int n;
	if(strcmp(pw,pw1)==0)
		AdminMenu();
	else{
		printf("#密码错误\n");
		printf("#你可以：\n#1.重试\n#0.返回\n");
		scanf("%d",&n);
		if(n==1) AdminLogin();
		if(n==0) Service();
		}
	return;
}
void Register()
{
	static char username[15];
	printf("#请输入10位学号\n");
	scanf("%s",username);
	if(strlen(username)!=10)
	{
		printf("#非法的学号！");
		Register();
	}
	CreateUserFolder(username);
	if((fp=fopen(Ad(username,"./Users/","pw"),"w+"))==NULL)
	{
		printf("#密码创建错误！\n");
		Service();
	}
	printf("#请输入密码：\n");
	char password[50];
	scanf("%s",password);
	fprintf(fp,password);
	fclose(fp);
	printf("#用户注册成功！\n");
	Service();
	return;
}
void CreateUserFolder(char* n)
{
char folderName[30] = "./Users/";
strcat(folderName,n);
    struct stat buffer;
    int a = (stat(folderName, &buffer) == 0);          //判断文件夹是否存在，不存在创建;
    if (a==0)
    {
        _mkdir(folderName);                                        //不存在则创建;
    }
	else 
	{
		printf("#该用户已存在！\n");
		system("pause");
		Service();
	}
}
void AdminMenu()
{
	int n;
	printf("#请选择服务：\n");
	printf("#1.图书登入\n");
	printf("#2.图书登出\n");
	printf("#0.返回\n");
	scanf("%d",&n);
	switch(n)
	{
		case 0: Service();break;
		case 1:BookIn();break;
		case 2:BookOut();break;
	}
}
void BookIn()
{
	printf("#请输入书籍序列号：\n");
	char book[20],ad[50]="./Data/";
	int n;
	scanf("%s",book);
	strcat(ad,book);
	strcat(ad,".dat");
	if((fp=fopen(ad,"r"))==NULL)
	{
		fp=fopen(ad,"w");
		fprintf(fp,"1");
		fclose(fp);
		printf("#登入完毕！您可以：\n#1.继续录入\n#0.返回\n");
		scanf("%d",&n);
		if(n==1) BookIn();
		if(n==0) AdminMenu();
		return;
	}
	fscanf(fp,"%d",&n);
	fp=fopen(ad,"w+");
	fprintf(fp,"%d",n+1);
	fclose(fp);
	printf("#登入完毕！您可以：\n#1.继续录入\n#0.返回\n");
	scanf("%d",&n);
	if(n==1) BookIn();
	if(n==0) AdminMenu();
	return;
}
void BookOut()
{
	printf("#请输入书籍序列号：\n");
	char book[20],ad[50]="./Data/";
	scanf("%s",book);
	strcat(ad,book);
	strcat(ad,".dat");
	if((fp=fopen(ad,"r"))==NULL)
	{
		printf("#未找到书籍\n");
		system("pause");
		AdminMenu();
		return;
	}
	int n;
	fscanf(fp,"%d",&n);
	if(n<1)
	{
		printf("#未找到书籍\n");
		system("pause");
		AdminMenu();
		return;
	}
	fp=fopen(ad,"w+");
	fprintf(fp,"%d",n-1);
	fclose(fp);
	printf("#登出完毕！您可以：\n#1.继续登入\n#0.返回\n");
	scanf("%d",&n);
	if(n==1) BookOut();
	if(n==0) AdminMenu();
	return;
}
