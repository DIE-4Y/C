#include<stdio.h>
//��д�������ж�ָ�����ַ��Ƿ��������ַ�

int my_cmp(char ch)
{
	if((ch >= '0')&&(ch <= '9'))
		return 1;
	else
		return 0;
}

int main()
{
	char ch;
	ch = getchar();
	int a = my_cmp(ch);
	if(a == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
