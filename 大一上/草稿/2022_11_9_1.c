#include<stdio.h>

//统计单词个数 
int main()
{
	char str[91];
	char c;
	gets(str);
	int num=0,word=0;
	int i;
	for(i=0;(c=str[i])!='\0';i++)
	{
		if(c==' ')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	printf("%d\n",num);
	return 0;
}
