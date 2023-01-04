#include<stdio.h>
#include<string.h>
void del(char *s,int l)
{
	for(int i=0;i<l-1;i++)
	{
		s[i]=s[i+1];
	}
	s[l-1]='\0';
}
int main()
{
	char s[80];
	char t;
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len-1;i++)
		for(int j=i;j<len;j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	for(int i=0;i<len-1;i++)
	{
		if(s[i]==s[i+1])
		{
			for(int j=i+1;j<len-1;j++)
			{
				s[j]=s[j+1];
			}
			s[len-1]='\0';
			len--;
			i--;
		}
	}
	puts(s);
	return 0;
}
