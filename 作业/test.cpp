#include <stdio.h>
struct student
{
   int age;
   char gender;
   char name[10];
}stu[5], *p=stu;
int main()
{
	scanf("%d", p->age);
}
