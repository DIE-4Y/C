#include<stdio.h>
#include<string.h>
//��һ���ǻ����ཱ���ѧ����������
//�ڶ���������ѧ����õĽ���������
//�������λ����λ���ϵ�ѧ����õĽ�����࣬
//�������֮���������ļ��г��������ѧ����������
//����������N��ѧ����õĽ�ѧ���������

int main()
{
	freopen("3006.txt", "r", stdin);
	int n, i, max_money = 0, sum = 0;
	char max_name[21];
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		char name[21], leader, west_stu;
		int e_grade, c_grade, essay, money = 0;
		scanf("%s %d %d %c %c %d", name, &e_grade, &c_grade, &leader, &west_stu, &essay);
		if((e_grade > 80) && (essay >= 1))
			money+=8000;
		if((e_grade > 85) && (c_grade > 80))
			money+=4000;
		if(e_grade > 90)
			money+=2000;
		if((west_stu == 'Y') && (e_grade > 85))
			money+=1000;
		if((c_grade > 80) && (leader == 'Y'))
			money+=850;
		sum+=money;
		if(max_money < money)
		{
			max_money = money;
			strcpy(max_name, name);
		}
	}
	printf("%s\n%d\n%d\n", max_name, max_money, sum);
	return 0;
}
