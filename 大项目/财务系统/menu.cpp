#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<windows.h>
#include "output.h"
#include "inquire.h"

void welcome();
void login();//�˻���¼
void menu();//�˵�
void input();//¼��
void inquire();//��ѯ
void thank();//��л

int main()
{
	welcome();
}
void welcome()
{
    system("color f6");
    printf("\n\n\n\n\n");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t|       ��ӭʹ���ɡ�ikun���������Ŀ����ϵͳ       | \n ");
    printf("\t\t  -----------------------------------------------");
    printf("\n\n");
    printf("\t\t  ----------------------------------------\n");
    printf("                 |             ��¼�˺��밴��1��           |\n");
    printf("                 |             �˳���ϵͳ�밴��2��         |\n");
    printf("\t\t  ---------------------------------------");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t��ѡ��");
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
    printf("\t\t|       ���¼                                   | \n ");
    printf("\t\t  -----------------------------------------------");
    printf("\n");
    printf("�������˺�:");
    scanf("%s", user);
    FILE* fp = fopen("zhanghu.txt", "r");
    if (fp == NULL)
    {
        printf("��ʧ��");
        exit(0);
    }
    else
    {
        fgets(a, 100, fp);
    }
    if (strcmp(user, a) == 0)
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|       �˺���ȷ                                 | \n ");
        printf("\t\t|          ����Ϊ��ikun!!!                       | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        
    }
    else
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|       �˺Ŵ���                                 | \n ");
        printf("\t\t|        ��������� �㵽���ǲ���ikun?             | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        system("pause");
        exit(0);
    }
    fclose(fp);
    printf("����������:");
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
        printf("\t\t|        ��¼�ɹ�                                |\n ");
        printf("\t\t|             �������߹ ikun!!��                | \n ");
        printf("\t\t  -----------------------------------------------");
        printf("\n");
        system("pause");
        menu();
    }
    else
    {
        printf("\t\t  -----------------------------------------------\n");
        printf("\t\t|        ��¼ʧ��                              |\n ");
        printf("\t\t|         ��������� �㵽���ǲ���ikun?          | \n ");
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
    printf("\t\t|       ��Ŀ¼���밴��3��                        | \n ");
    printf("\t\t|       ��Ŀ��ѯ�밴��4��                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t��ѡ��");
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
    printf("\t\t|      ��Ŀ¼�����                           | \n ");
    printf("\t\t|      ����0��������һ��                      | \n ");
    printf("\t\t|      ����9������ʹ��                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t��ѡ��");
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
    printf("\t\t|      ��Ŀ��ѯ���                          | \n ");
    printf("\t\t|      ����0��������һ��                      | \n ");
    printf("\t\t|      ����9������ʹ��                        | \n ");
    printf("\t\t  -----------------------------------------------\n");
    printf("\t\t��ѡ��");
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
    printf("\t\t|         ��л����ʹ��                          | \n ");
    printf("\t\t  -----------------------------------------------\n");
	system("pause");
	exit(0);
}
