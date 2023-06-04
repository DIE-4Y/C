#include<stdio.h>
//写一个函数执行strlen的作用但是不定义形参
int my_strlen(char*);

int main()
{
	char str[100];
	gets(str);
	int n;
	n = my_strlen(str);
	printf("%d\n",n);
	return 0;
}

int my_strlen(char* str)
{
	if(*str!='\0')
		return 1+my_strlen(str+1);
}
