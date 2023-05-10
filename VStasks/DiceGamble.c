#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int sum(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int banker=2000,player=2000,choice,baozi[6]={0,0,0,0,0,0},N,chip,baozif=0;
    scanf("%d",&N);
    int b[N],p[N];
    while (banker>0 && player>0)
    {   
        scanf("%d",&chip);
        for (int i = 0; i < N; i++)
        {
            b[i]=rand()%6;
            p[i]=rand()%6;
            baozi[b[i]]++;
            if(baozi[b[i]]>=3)  baozif=1;
        }
        for (int i = 0; i < N; i++)
        {
            printf("%d ",p[i]);
        }
        printf("\n输入选择\n1:猜大\n-1:猜小\n0:猜豹子");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if (sum(p,N)>sum(b,N))
            {
                player+=chip;
                banker-=chip;
            }
            else {
                player-=chip;
                banker+=chip;
            }
            
            break;
        case -1:
            if (sum(p,N)<sum(b,N))
            {
                player+=chip;
                banker-=chip;
            }
            else{
                player-=chip;
                banker+=chip;
            }break;
        case 0:
            if (baozif==1)
            {
                player+=chip*5;
                banker-=chip*5;
            }
            else{
                player-=chip*5;
                banker+-chip*5;
            }break;
            
        default:printf("选项不存在！");
            break;
        }
        printf("player:%d\nbanker:%d\n");
    }
    printf("游戏结束！");
    if (player>0)
    {
        printf("玩家胜！");
    }
    else printf("庄家胜！");
}
