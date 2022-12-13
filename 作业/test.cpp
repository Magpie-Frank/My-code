#include <stdio.h>
struct stu
{
int x;
int *y;
}*p;
int dt[4]={10,20,30,40};
struct stu a[4]={40,&dt[0],50,&dt[1],60,&dt[2],70,&dt[3]};
int main()
{
p=a;
printf("%d,",++p->x);
printf("%d,",(++p)->x);
printf("%d",++(*p->y));
return 0;
}
