#include<stdio.h>
#include<stdlib.h>
struct node{
    int    num;
    struct node *next;
} ; 
int main(){
struct node *hp,*p;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    hp = NULL;
    for(int i=0;i<10;i++)
    {
       p = (struct node *) malloc(sizeof(struct node));
       p->num = a[i];
       p->next=hp;
       hp=p;
    }
    p=hp->next;
    while(p)
    {
        printf("%d", p->num);    
        p = p->next;    
    }

}
