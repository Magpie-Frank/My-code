#include<stdio.h>
int main()
{
	char ran[26],mag[26];
	char temp;
	int i,b;
	do{
		temp=getchar();		
	}while(temp!='"');
	temp='\0';
	for(i=0;temp!='"';i++)
	{
		temp=getchar();
		ran[temp-97]++;
	}
	temp='\0';
	ran[i]='\0';
	do{
			temp=getchar();		
	}while(temp!='"');
	temp='\0';
	for(i=0;temp!='"';i++)
	{
		temp=getchar();
		mag[temp-97]++;
	}
	i=0;
	b=1;
	do{
		if(ran[i]>mag[i])
		{
			b=0;
			break;
		}
		i++;
	}while(i<26);
	if(b==1)
	printf("true");
	else printf("false");
	return 0;
}
/*for (int i = 0;i < ransomNote.size();i++) {//一个一个全部遍历
            for (int j = 0;j < magazine.size();j++) {
                if (ransomNote[i] == magazine[j]) {//如果两个字符相等，则说明有字符能组成
                    magazine[j] = '0';//把a中的换成0
                    ransomNote[i] = '1';//把b中的换成1
                    //作用就是把能对应的字符一个一个划掉
                }
            }
        }
       for (int i = 0;i < ransomNote.size();i++) {
           if (ransomNote[i] != '1') {
               return false;//如果有不对应的说明并没有完全替换，直接false
           }
       }
       return true;//剩下便是true
*/
