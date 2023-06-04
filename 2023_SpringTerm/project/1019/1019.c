#include<stdio.h> 
#include<string.h>
//按照成绩从高到低排序后输出。若有相同的，不能改变其顺序

int main()
{
	int i = 0, j, k;
	typedef struct stu
	{
		char name[21];
		int score;
	}stu;
	stu Stu[101];
	freopen("1019.txt", "r", stdin);
	for(i = 0; scanf("%s %d", &Stu[i].name, &Stu[i].score) != EOF; i++)			//读入所有学生姓名判断是否到文件末尾看 
	{
	}
	for(j = 0; j < i - 1; j++)
	{
		int k;
		stu tmp;
		for(k = 0; k < i - 1; k++)
		{
			if(Stu[k].score < Stu[k + 1].score)
			{
				tmp = Stu[k]; Stu[k] = Stu[k + 1]; Stu[k + 1] = tmp; 	//用冒泡排序按大到小排列 
			}
		}
	}
	printf("%d\n", Stu[0].score);
	for(j = 0; j < i; j++)
	{
		printf("%-20s %3d\n", Stu[j].name, Stu[j].score);
	}
	return 0;
}
