#include<stdio.h> 


int main()
{
	int a;
	freopen("1006.txt", "r", stdin);
	while(scanf("%d", &a) != EOF)			//���ƶ����ļ�ĩβ��ÿ�δ𰸶���һ�зֿ� 
	{
		int b;
		scanf("%d", &b);
		printf("%d\n\n", a + b);
	}
	return 0;
}
