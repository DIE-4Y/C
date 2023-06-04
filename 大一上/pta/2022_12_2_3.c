//一个指针数组装星期信息，输入一个字符串，在其中查找,并输出下标，若无则输出-1
#include<stdio.h>
#include<string.h>

char str1[8][10] = {{},{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};

void my_compera(char str[10][10], int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		int flag = 0;
		int j;
		for(j = 1;j<8; j++)
		{
			if(strcmp(str1[j],str[i]) == 0)
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",j);
		}
	}
}

int main()
{
	int repeat, i;
	char ch,str2[10][10];
	scanf("%d",&repeat);
	for(i = 0;i < repeat; i++)
	{
		scanf("%s",str2[i]);
	}
	my_compera(str2, repeat);
	return 0;
}
