#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];
    
    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}



bool palindrome( char *s )
{
	char *p=s;
	while(*p!='\0')
	{
		p++;
	}
	int len=p-s,flag=1;
	for(int i=0;i<len;i++)
	{
		if(*(p-1-i)!=*(s+i))
		{
			return false;
		}
	}
	return true;
}
