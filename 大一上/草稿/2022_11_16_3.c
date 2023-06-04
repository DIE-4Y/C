#include<stdio.h>
#include<string.h>
//小写字母转换为对应的大写字母,大写字母转换为对应的小写字母,数字字符转换为ASCII代码表中的下一个字符
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
