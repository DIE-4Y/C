#include<stdio.h>


int main()
{
	int n, i, a, b;
	freopen("1007.txt", "r", stdin);		
	scanf("%d", &n);					//����n����ͣ�ÿ������֮�䶼��һ�зֿ� 
	for(i = 1; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n\n", a + b);
	}
	scanf("%d %d", &a, &b);					//���һ��û�пո� 
	printf("%d", a + b);
	return 0;
}
