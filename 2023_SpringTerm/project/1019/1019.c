#include<stdio.h> 
#include<string.h>
//���ճɼ��Ӹߵ�������������������ͬ�ģ����ܸı���˳��

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
	for(i = 0; scanf("%s %d", &Stu[i].name, &Stu[i].score) != EOF; i++)			//��������ѧ�������ж��Ƿ��ļ�ĩβ�� 
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
				tmp = Stu[k]; Stu[k] = Stu[k + 1]; Stu[k + 1] = tmp; 	//��ð�����򰴴�С���� 
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
