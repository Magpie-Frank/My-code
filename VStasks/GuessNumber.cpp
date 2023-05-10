#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int num;
int Judge(int n){
    int a,b,c;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if(222*(a+b+c)==num+n)
    {
        return 1;
    }
    else return 0;
}
void Tips()
{
    printf("玩家和电脑轮流猜数字\n");
}
int main()
{
    int ans;
    Tips();
    while (1)
    {
        printf("请输入和：\n");
        scanf("%d",&num);
        for (int i = 100; i < 1000; i++)
        {
            if (Judge(i))
            {
                printf("你心中的数字是：%d\n",i);
            }
            
        }
        printf("还想玩吗？：\n1.是\t2.否\n");
        scanf("%d",&ans);
        if (ans==1)
        {
            continue;
        }
        else if (ans==2)
        {
            break;
        }
        
        
        
    }
    printf("游戏结束！\n");
    return 0;
}
