//��������ѧ���ɼ���ͳ�Ʋ����ѧ����ƽ������ߺ���ͳɼ�������ʹ�ö�̬�ڴ������ʵ�֡�
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
	int score[10000];		//ע�������㹻�� 
	scanf("%ld",&N);
	for(i = 0;i < N; i++)
	{
		scanf("%d",&score[i]);
	}
	aver = ave(score, N);
	printf("average = %.2f\nmax = %.2f\nmin = %.2f\n",aver, max, min);
	return 0;
}

