#include<stdio.h> 


int main()
{
	int a, b, c;
	freopen("1017.txt", "r", stdin);		//输出学生三科成绩和(四舍五入)平均成绩 
	while(scanf("%d", &a) != EOF)
	{
		float ave;
		scanf("%d %d", &b, &c);
		ave = (a + b + c) / 3.0;
		printf("math=%d,eng=%d,comp=%d,average=%d\n", a, b, c, (int)(ave + 0.5)); 
	}
	return 0;
}
