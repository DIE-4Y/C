#include<stdio.h>
#include<string.h>
//Сд��ĸת��Ϊ��Ӧ�Ĵ�д��ĸ,��д��ĸת��Ϊ��Ӧ��Сд��ĸ,�����ַ�ת��ΪASCII������е���һ���ַ�
int main()
{
	int i,j,n;
	char str[1000];
	str[999] = '\0';
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
		{
			str[i]-=32;
		}
		else if((str[i]>='A')&&(str[i]<='Z'))
		{
			str[i]+=32;
		}
		else if((str[i]>='0')&&(str[i]<='9'))
		{
			str[i]+=1;
		}
	}
	puts(str);
	return 0;
}
