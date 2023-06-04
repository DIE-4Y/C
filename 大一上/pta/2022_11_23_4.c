#include<stdio.h>

//ººÅµËþÎÊÌâ

void move(char *x, char *y)
{
	printf("%s->%s\n", x, y);
}

void hanoi(int N, char *one, char *two, char *three)
{
	if(N == 1)
	{
		move(one, three);
	}
	else
	{
		hanoi(N-1, one, three , two);
		move(one, three);
		hanoi(N-1, two, one, three);
	}
}

int main()
{
	char x[20], y[20], z[20];
	int i, N;
	scanf("%d", &N);
	char ch[3];
	scanf("%s%s%s", x, y, z);
	hanoi(N, x, y, z);
	return 0;
}
