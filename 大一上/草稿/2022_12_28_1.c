#define row 3
#define col 3

#include<stdio.h>
//��������Ϸ 

void menu()
{
	printf("****************************\n");
	printf("******1.play  0.exit********\n");
	printf("****************************\n");
}

void inboard(char board[row][col], row, col)
{
	int i = 0, j = 0;
	for(i = 0; i<row; i++)
	{
		for(j = 0; j<col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[row][col], row, col)
{
	int i = 0, j = 0;
	for(i = 0; i<row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if(i<row - 1)
			printf("---|---|---\n");
	}
}

void game()
{
	char board[row][col];	//�������ַ� 
	inboard(board, row, col);
	display(board, row, col);
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break; 
		}
	}while(input);
}

int main()
{
	test();
	
	return 0;
}
