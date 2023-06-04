#include<stdio.h>
//找最高分和最低分

int main()
{
	typedef struct s
	{
		char name[21];
		int score;
	}s;
	s Stu[100];
	int i;
	freopen("1020.txt", "r", stdin);
	for(i = 0; scanf("%s %d", &Stu[i].name, &Stu[i].score) != EOF; i++)
	{
	}
	int j;
	for(j = 0; j < i - 1; j++)
	{
		int k;
		s tmp;
		for(k = 0; k < i - j - 1; k++)
		{
			if(Stu[k].score < Stu[k + 1].score)
			{
				tmp = Stu[k]; Stu[k] = Stu[k + 1]; Stu[k + 1] = tmp;	//用冒泡排序按大到小排列 
			}
		}
	}
	int max = Stu[0].score, min = Stu[i-1].score;
	int h = 0, l = 0;
	for(j = 0; j < i; j++)				//将最高分最低分的个数记录下来 
	{
		if(max == Stu[j].score)
		{
			h++; 
		}
		if(min == Stu[j].score)
		{
			l++;
		}
	}
	if(h == 1)
	{
		printf("Max is %d,name has %s\n", max, Stu[0].name);
	}
	else
	{
		printf("Max is %d,name have ", max);
		for(j = 0; j < h - 1; j++)
		{
			printf("%s,",Stu[j].name);
		}
		printf("%s\n",Stu[j].name);
	}
	if(l == 1)
	{
		printf("Min is %d,name has %s\n", min, Stu[i - 1].name);
	}
	else
	{
		printf("Min is %d,name have ", min);
		for(j = i - l; j < i - 1; j++)
		{
			printf("%s,",Stu[j].name);
		}
		printf("%s\n",Stu[j].name);
	}
	return 0;
}
