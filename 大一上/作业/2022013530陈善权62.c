#include<stdio.h>
#include<string.h>
//将两个字符串连接 
int main()
{
	char str[201],str1[100],str2[100];
	int i,n;
	gets(str1);
	gets(str2);
	strcpy(str,str1);
	for(i=0;i<100;i++)
	{
		if(str1[i]=='\0')
		{
			n=i;
			break;
		}
	}
	for(i=0;n<200;n++,i++)
	{
		str[n]=str2[i];
	}
	printf("%s\n",str);
	return 0;
}
