#include<stdio.h>


int main()
{
	int l, m, i, tree[10001] = {0}, num = 0;		//l��ʾ��·����,jtree[i]==1��ʾ��һ������m��ʾҪ�Ƴ������� 
	freopen("3204.txt", "r", stdin);
	scanf("%d %d", &l, &m);
	for(i = 0; i <= l; i++)
	{
		tree[i] = 1;
	}
	for(i = 1; i <= m; i++) 
	{
		int start, end, j;				//start��ʾ�Ƴ�������ʼλ�ã�end��ʾ����������ʼλ�� 
		scanf("%d %d", &start, &end);
		for(j = start; j <= end; j++)
		{
			tree[j] = 0;
		}
	}
	for(i = 0; i <= l; i++)
	{
		if(tree[i])				//ͳ�ƻ�ʣ���ٿ���
			num++;
	}
	printf("%d", num);
	return 0;
}
