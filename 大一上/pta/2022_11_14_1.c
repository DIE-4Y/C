#include <stdio.h>
#include <string.h> 

int main() 
{
    char a[1000];//初始化数组
    gets(a);//赋值
    int n,num=0,i;
    n=strlen(a)-1;
    for (i=0;i<n;i++)
	{
        if (a[i] != ' ' && a[i+1] == ' ') num++;
        if (a[i] != ' ' && a[i+1] == '\0') num++;
    } 
    printf("%d\n",num);
    return 0;
}

/*
#include<stdio.h>
#include<string.h> 
//统计一行字符中单词的个数
int main()
{
	char str[1000];
	int num=0,i,word;
	str[999]='\0';
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]<'A')||((str[i]>'Z')&&(str[i]<'a'))||(str[i])>'z')
		{
			word=0;
		}
		if(((str[i]<='z'&&str[i]>='a')||(str[i]<='Z'&&str[i]>='A'))&&(word==0))
		{
			num++;
			word=1;
		}
	}
	printf("%d\n",num);
	return 0;
}
//||(str[i]<=9&&str[i]>=0) 
*/

