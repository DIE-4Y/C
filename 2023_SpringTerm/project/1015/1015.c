#include<stdio.h>


int main()
{
	float f, c;
	freopen("1015.txt", "r", stdin);		//将文件所有华氏温度转化为三位小数的摄氏温度 
	while(scanf("%f", &f) != EOF)
	{
		c=5 * (f-32) / 9.0;
		printf("%.3f\n", c);
	}
	return 0;
}
