//���ýṹ�������߼ۺ���ͼ۵����� 

#include<stdio.h>

typedef struct book
{
	char name[31];
	double price;
}book;

int main()
{
	book a[10];
	int i, k, j, n;
	double max, min;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		getchar();			//���ջس�����֤name�������� 
		gets(a[i].name);		//��Ϊ�����пո���gets���� 
		scanf("%lf", &a[i].price);
	}
	min = max = a[0].price;
	k = j = 0;
	for(i = 1;i < n; i++)
	{
		if(max < a[i].price)
		{
			max = a[i].price;
			k = i;
		}
		if(min > a[i].price)
		{
			min = a[i].price;
			j = i;
		}
	}
	printf("%.2lf, %s\n",a[k].price, a[k].name);
	printf("%.2lf, %s\n",a[j].price, a[j].name);
	return 0;
	
}
