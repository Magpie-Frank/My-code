#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<windows.h>
#include "output.h"
#include "inquire.h"

void welcome();
void login();//账户登录
void menu();//菜单
void input();//录入
void inquire();//查询
void thank();//感谢

int main()
{
	welcome();
}
void welcome()
{
    system("color f6");
    printf("\n\n\n\n\n");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|       欢迎使用由“ikun”编译的账目管理系统       | \n ");
    printf("\t\t  -----------------------------------------------");
    printf("\n\n");
    printf("\t\t  ----------------------------------------\n");
    printf("                 |             登录账号请按“1”           |\n");
    printf("                 |             退出该系统请按“2”         |\n");
    printf("\t\t  ---------------------------------------");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t请选择：");
    printf("\n");
    int n;
    printf("                                    ");
    scanf(" %d", &n);
    if (n > 2 || n < 1)
        exit(0);
    else
    {
        switch (n)
        {
        case 1:  login();
            break;
        case 2:  exit(0);
            break;
        }

    }
}



void login()
{
    system("cls");
    char a[100];
    char b[100];
    char user[20];
    char password[20];
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|       请登录                                   | \n ");
    printf("\t\t  -----------------------------------------------");
    printf("\n");
    printf("请输入账号:");
    scanf("%s", user);
    FILE* fp = fopen("zhanghu.txt", "r");
    if (fp == NULL)
    {
        printf("打开失败");
        exit(0);
    }
    else
    {
        fgets(a, 100, fp);
    }
    if (strcmp(user, a) == 0)
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|       账号正确                                 | \n ");
        printf("\t\t|          鉴定为真ikun!!!                       | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        
    }
    else
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|       账号错误                                 | \n ");
        printf("\t\t|        哎呦你干嘛 你到底是不是ikun?             | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        system("pause");
        exit(0);
    }
    fclose(fp);
    printf("请输入密码:");
    scanf("%s", password);
    FILE* gp = fopen("mima.txt", "r");
    if (gp == NULL)
    {
        printf("failure");
        exit(0);
    }
    else
    {
        fgets(b, 100, gp);

    }
    if (strcmp(password, b) == 0)
    {

        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|        登录成功                                |\n ");
        printf("\t\t|             真的是你吖 ikun!!！                | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        system("pause");
        menu();
    }
    else
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|        登录失败                              |\n ");
        printf("\t\t|         哎呦你干嘛 你到底是不是ikun?          | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        system("pause");
        exit(0);
    }
    fclose(gp);

}


void menu()
{    
    system("cls");
    int m;
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|       账目录入请按“3”                        | \n ");
    printf("\t\t|       账目查询请按“4”                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t请选择：");
    scanf(" %d", &m);
    if (m> 4 || m < 3)
        exit(0);
    else
    {
        switch (m)
        {
        case 3:   input();
            break;
        case 4:  
            inquire();
            break;
        }

    }

}
 
void input()
{
    
    system("cls");
    int x;
	write();










    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|      账目录入完毕                           | \n ");
    printf("\t\t|      按“0”返回上一级                      | \n ");
    printf("\t\t|      按“9”结束使用                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t请选择：");
    scanf("%d", &x);
    switch (x)
    {
    case 9:
		thank();
        break;
    case 0:
        menu();break;
    }



}


void inquire()
{
    system("cls");
    int y;

	search();










    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|      账目查询完毕                          | \n ");
    printf("\t\t|      按“0”返回上一级                      | \n ");
    printf("\t\t|      按“9”结束使用                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t请选择：");
    scanf("%d", &y);
    switch (y)
    {
    case 9: thank();
        break;
    case 0: menu();
        break;
    }
    
}


void thank()
{
    system("cls");
    
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|         感谢您的使用                          | \n ");
    printf("\t\t  -----------------------------------------------\n");
	system("pause");
	exit(0);
}
