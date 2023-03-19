#include <stdio.h>
#include <string.h>
struct student
{
    char num[20];
    char name1[30];
    int grade[3];
}stu[100];
int main()
{
    int i,n;
    char name[30];
    int index=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",stu[i].num);
        scanf("%s",stu[i].name1);
        scanf("%d %d %d",&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
        getchar();
    }
    getchar();
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        char *ret;
		ret=strstr(stu[i].name1,name);
        if(ret!=NULL)
        {
            index=0;
            printf("%s %s %d %d %d",stu[i].num,stu[i].name1,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2]);
            
        }
    }
    if(index==-1)
    {
        printf("Not Found");
    }
    return 0;
}
