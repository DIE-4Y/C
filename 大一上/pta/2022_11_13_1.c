#include<stdio.h>
#include<string.h>
//统计字符串长度 
int main()
{
	char ch;
	int num=0;
	while(1)
	{
		ch=getchar();
		if((ch<='z'&&ch>='a')||(ch>='A'&&ch<='Z'))
		num++;
		if(ch=='\n'||ch=='\t') break;
	}
	printf("%d",num); 
	return 0;
}
