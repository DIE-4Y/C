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
	freopen("1018.txt", "r", stdin);
	for(i = 0;scanf("%s %d", &Stu[i].name, &Stu[i].score) != EOF; i++)			//��������ѧ�������ж��Ƿ��ļ�ĩβ�� 
	{
		
	}
	for(j = 0; j < i - 1; j++)
	{
		for(k = 0; k < i - 1; k++)
		{
			if(Stu[k].score < Stu[k + 1].score)		//��ѡ�����򷨽�ѧ����Ҫ������ 
			{
				stu tmp;
				tmp = Stu[k];
				Stu[k] = Stu[k + 1];
				Stu[k + 1] = tmp;//ÿ�˽����ɼ���ߵ�ѧ����Ϣ 
			}
		}
		
	}
	for(j = 0; j < i; j++)
	{
		printf("%s %d\n", Stu[j].name, Stu[j].score);
	}
	return 0;
}



