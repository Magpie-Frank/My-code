#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int t=0,i=0,x,n,f=0;
	scanf("%d %d",&t,&n);
	while(1){
		i++;
		scanf("%d",&x);
		if(x<0)
		{
			if(i<=n)
			printf("Game Over\n");
			exit(0);
		}
		if(i<=n){
		if(x==t)
		{
			if(i==1)
			{
				if(f==0){
				printf("Bingo!\n");f++;}
			}
			else {
			if(i<=3)
			{
				if(f==0){
				printf("Lucky You!\n");
				f++;}
			}
			else{
				if(f==0){
				printf("Good Guess!\n");f++;}
			}
		}
		}}
		if(i<n)
		{
			if(x>t)
			{
				if(f==0)
				printf("Too big\n");
			}
			else if(f==0) printf("Too small\n");
		}
		if(i==n) if(f==0) printf("Game Over\n");
	}
}
