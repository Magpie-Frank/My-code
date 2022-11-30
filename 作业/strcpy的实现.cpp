#include <stdio.h>
char* strcpy(char *a, const char *b);
int main()
{
    char s1[40], s2[40], s3[40];
    gets(s3);
    strcpy(s1, strcpy(s2, s3));
    puts(s1);
    puts(s2);
    puts(s3);
    return 0;
}
char* strcpy(char *a, const char *b)
{
    int i=0;
    do{
        *(a+i)=*(b+i);
        i++;
    }while(*(b+i-1)!='\0');
    return a;
}
