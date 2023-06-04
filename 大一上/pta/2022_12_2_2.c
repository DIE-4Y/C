//根据输入学生成绩，统计并输出学生的平均、最高和最低成绩。建议使用动态内存分配来实现。
#include<stdio.h>

double max, min;

double ave(int *p,long long n)
{
	long long i;
	double sum;
	max = min =sum = *p;
	for(i = 1;i < n; i++)
	{
		sum = sum + *(p+i);
		if(max<*(p+i))max = *(p+i);
		if(min>*(p+i))min = *(p+i); 
	}
	return sum/n;
}

int main()
{
	double aver;
	long long N, i;
	int score[10000];		//注意数组足够大 
	scanf("%ld",&N);
	for(i = 0;i < N; i++)
	{
		scanf("%d",&score[i]);
	}
	aver = ave(score, N);
	printf("average = %.2f\nmax = %.2f\nmin = %.2f\n",aver, max, min);
	return 0;
}

