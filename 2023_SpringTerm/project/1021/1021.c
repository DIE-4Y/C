#include<stdio.h>
#include<math.h>
//倒序输出每一项，还要计算位数 

int main()
{
	int ret, i;
	freopen("1021.txt", "r", stdin);
	while(scanf("%d", &ret) != EOF)
	{
		int k = ret;
		for(i = 0; k > 0; i++)
		{
			k = k / 10;
		}
		int flag = i;
		if(i == 0)
		{
			printf("0 has one number,is 0\n");
			continue;
		}
		else if(i == 1)
		{
			printf("%d has one number,is %d\n", ret, ret);
			i = 0;
			continue;
		}
		else
		{
			printf("%d have ",ret);
			switch(i)
			{
				case 2:printf("two ");break;
				case 3:printf("three ");break;
				case 4:printf("four ");break;
				case 5:printf("five ");break;
				case 6:printf("six ");break;
				case 7:printf("seven ");break;
				case 8:printf("eight ");break;
				case 9:printf("nine ");break;
				case 10:printf("ten ");break;
			}
			printf("numbers,are ");
			int k;
			while(ret > 9)
			{
				printf("%d,", ret%10);
				ret /= 10;
			}
			printf("%d\n", ret);
		}
	}
	return 0;
}
