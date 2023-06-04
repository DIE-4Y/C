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
	freopen("1018.txt", "r", stdin);
	for(i = 0;scanf("%s %d", &Stu[i].name, &Stu[i].score) != EOF; i++)			//读入所有学生姓名判断是否到文件末尾看 
	{
		
	}
	for(j = 0; j < i - 1; j++)
	{
		for(k = 0; k < i - 1; k++)
		{
			if(Stu[k].score < Stu[k + 1].score)		//用选择排序法将学生按要求排序 
			{
				stu tmp;
				tmp = Stu[k];
				Stu[k] = Stu[k + 1];
				Stu[k + 1] = tmp;//每趟交换成绩最高的学生信息 
			}
		}
		
	}
	for(j = 0; j < i; j++)
	{
		printf("%s %d\n", Stu[j].name, Stu[j].score);
	}
	return 0;
}



