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
/*for (int i = 0;i < ransomNote.size();i++) {//һ��һ��ȫ������
            for (int j = 0;j < magazine.size();j++) {
                if (ransomNote[i] == magazine[j]) {//��������ַ���ȣ���˵�����ַ������
                    magazine[j] = '0';//��a�еĻ���0
                    ransomNote[i] = '1';//��b�еĻ���1
                    //���þ��ǰ��ܶ�Ӧ���ַ�һ��һ������
                }
            }
        }
       for (int i = 0;i < ransomNote.size();i++) {
           if (ransomNote[i] != '1') {
               return false;//����в���Ӧ��˵����û����ȫ�滻��ֱ��false
           }
       }
       return true;//ʣ�±���true
*/
