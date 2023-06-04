#include<stdio.h>


int main()
{
	int l, m, i, tree[10001] = {0}, num = 0;		//l表示马路长度,jtree[i]==1表示有一棵树，m表示要移除几次树 
	freopen("3204.txt", "r", stdin);
	scanf("%d %d", &l, &m);
	for(i = 0; i <= l; i++)
	{
		tree[i] = 1;
	}
	for(i = 1; i <= m; i++) 
	{
		int start, end, j;				//start表示移除树的起始位置，end表示移走树的起始位置 
		scanf("%d %d", &start, &end);
		for(j = start; j <= end; j++)
		{
			tree[j] = 0;
		}
	}
	for(i = 0; i <= l; i++)
	{
		if(tree[i])				//统计还剩多少棵树
			num++;
	}
	printf("%d", num);
	return 0;
}
