#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct Card
{
    int num;
    int color;
};
struct Card deck[52],*dp[52],*t;
void Inicialize(){
    for (int i = 0; i < 52; i++)
    {
        dp[i]=&deck[i];
    }//deck指针初始化
}
void Shuffle(struct Card *dp[])
{
    int x;
    for (int i = 0; i < 52; i++)
    {
        x=rand()%52;
        t=dp[i];
        dp[i]=dp[x];
        dp[x]=t;
    }//洗牌
}
int main()
{
    srand(time(NULL));
    int r; 
    for(int i=1;i<=13;i++)
        for (int j = 1; j <= 4; j++)
        {
            deck[4*i+j-5].color=j;
            deck[4*i+j-5].num=i;
        }//deck初始化
    while (1)
    {
        printf("欢迎来到纸牌游戏！\n请选择你想查看的牌堆序号\n");
        Inicialize();
        Shuffle(dp);
        int c;
        scanf("%d",&c);
        c=13*c-1;
        for(int i=c;i<c+13;i++)
        {
            printf("%c%d\t",dp[i]->color+2,dp[i]->num);
        }
        printf("你还想玩吗？\n1.想\n2.不想\n");
        scanf("%d",&c);
        if(c==0)
        break;
    }
    system("pause");
    return 0;
}
