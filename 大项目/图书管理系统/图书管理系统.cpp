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
	printf("��ӭʹ��ͼ�����ϵͳ\n");
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
	printf("#ѧ�ţ�\n");
	char pw[50];
	static char username[15];
	int n;
	for(int i=0;i<15;i++)
	username[i]='\0';
	scanf("%s",username);
	if((fp=fopen(Ad(username,"./Users/","pw"),"r"))==NULL)
	{
		printf("#�û��������ڣ��Ƿ�ע�����û���\n");
		printf("#1.�ǣ�ע�����û�\n#0.�񣬷������˵�\n");
		scanf("%d",&n);
		if(n==1) Register();
		if(n==0) Service();                                 //��֤�û���
	}
	fscanf(fp,"%s",pw);
	fclose(fp);
	char pw1[50];
	printf("#���룺\n");
	scanf("%s",pw1);
	if(strcmp(pw,pw1)==0)
		UserMenu(username);
	else {
			printf("#�������\n");
			printf("#����ԣ�\n");
			printf("#1.����\n#0.�������˵�\n");
			scanf("%d",&n);
			if(n==0) Service();
			if(n==1) UserLogin();                          //��֤����       
		}
}
void Service()
{
	void UserLogin(),Register(),Admin();
	printf("#���������ѡ�����\n");
		printf("#1.�û���¼\n");
		printf("#2.���û�ע��\n");
		printf("#9.����Ա��¼\n");
		printf("#0.�˳�����\n");
		int service;
		scanf("%d",&service);
		switch(service)
		{
			case 1:UserLogin();break;
			case 2:Register();break;
			case 9:AdminLogin();break;
			case 0:printf("#ллʹ��\n");exit(0);
			default:printf("Service not found!");Service();
		}
}
void UserMenu(char* name)
{
	int UserOut(char* name),UserIn(char* name);
	printf("#��ѡ�����\n");
	printf("#1.����\n#2.����\n#0.����\n");
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
	printf("#�������鼮���кţ�\n");
	char book[20],ad1[50]="./Data/";
	int n;
	scanf("%s",book);
	strcat(ad1,book);
	strcat(ad1,".dat");
	if((fp=fopen(ad1,"r"))==NULL)
	{
		printf("#δ�ҵ��鼮��\n#�����ԣ�\n#1.����\n#0.����\n");
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
		printf("#�����޿�棡\n#�����ԣ�\n#1.����\n#0.����\n");
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
			printf("#���ĳɹ���\n");
			UserMenu(name);
		}
		char book2[20];
		if((x=fscanf(fp,"%s",book2))!=EOF)
		{
			printf("#�޷����ģ�\n#�����鼮��δ�黹��\n#%s\n",book2);
			system("pause");
			UserMenu(name);
		}
		
	}
	return;
}
void UserIn(char* name)
{
	printf("#�������鼮���кţ�\n");
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
		printf("#����ɹ���\n");
		system("pause");
		UserMenu(name);
	}
	else{
		fclose(fp);
		printf("#δ�ҵ��鼮��\n#�����ԣ�\n#1.����\n#0.����");
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
	printf("#���������Ա���룺\n");
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
		printf("#�������\n");
		printf("#����ԣ�\n#1.����\n#0.����\n");
		scanf("%d",&n);
		if(n==1) AdminLogin();
		if(n==0) Service();
		}
	return;
}
void Register()
{
	static char username[15];
	printf("#������10λѧ��\n");
	scanf("%s",username);
	if(strlen(username)!=10)
	{
		printf("#�Ƿ���ѧ�ţ�");
		Register();
	}
	CreateUserFolder(username);
	if((fp=fopen(Ad(username,"./Users/","pw"),"w+"))==NULL)
	{
		printf("#���봴������\n");
		Service();
	}
	printf("#���������룺\n");
	char password[50];
	scanf("%s",password);
	fprintf(fp,password);
	fclose(fp);
	printf("#�û�ע��ɹ���\n");
	Service();
	return;
}
void CreateUserFolder(char* n)
{
char folderName[30] = "./Users/";
strcat(folderName,n);
    struct stat buffer;
    int a = (stat(folderName, &buffer) == 0);          //�ж��ļ����Ƿ���ڣ������ڴ���;
    if (a==0)
    {
        _mkdir(folderName);                                        //�������򴴽�;
    }
	else 
	{
		printf("#���û��Ѵ��ڣ�\n");
		system("pause");
		Service();
	}
}
void AdminMenu()
{
	int n;
	printf("#��ѡ�����\n");
	printf("#1.ͼ�����\n");
	printf("#2.ͼ��ǳ�\n");
	printf("#0.����\n");
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
	printf("#�������鼮���кţ�\n");
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
		printf("#������ϣ������ԣ�\n#1.����¼��\n#0.����\n");
		scanf("%d",&n);
		if(n==1) BookIn();
		if(n==0) AdminMenu();
		return;
	}
	fscanf(fp,"%d",&n);
	fp=fopen(ad,"w+");
	fprintf(fp,"%d",n+1);
	fclose(fp);
	printf("#������ϣ������ԣ�\n#1.����¼��\n#0.����\n");
	scanf("%d",&n);
	if(n==1) BookIn();
	if(n==0) AdminMenu();
	return;
}
void BookOut()
{
	printf("#�������鼮���кţ�\n");
	char book[20],ad[50]="./Data/";
	scanf("%s",book);
	strcat(ad,book);
	strcat(ad,".dat");
	if((fp=fopen(ad,"r"))==NULL)
	{
		printf("#δ�ҵ��鼮\n");
		system("pause");
		AdminMenu();
		return;
	}
	int n;
	fscanf(fp,"%d",&n);
	if(n<1)
	{
		printf("#δ�ҵ��鼮\n");
		system("pause");
		AdminMenu();
		return;
	}
	fp=fopen(ad,"w+");
	fprintf(fp,"%d",n-1);
	fclose(fp);
	printf("#�ǳ���ϣ������ԣ�\n#1.��������\n#0.����\n");
	scanf("%d",&n);
	if(n==1) BookOut();
	if(n==0) AdminMenu();
	return;
}
