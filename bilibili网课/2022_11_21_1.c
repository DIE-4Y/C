#include<stdio.h>
//дһ������ִ��strlen�����õ��ǲ������β�
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
