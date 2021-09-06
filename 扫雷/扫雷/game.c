#include"game.h"

void Initboard(char board[ROWS][COLS], int row, int col, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ret;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0;j < col - 1;j++)
		printf("%d ",j);
	printf("\n");
	for (i = 1;i < row - 1;i++)
	{
		printf("%d ", i);
		for (j = 1;j < col - 1;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void setboard(char board[ROWS][COLS], int row, int col)
{
	
	int count = bomb_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0';


}

void Findboard(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int finally = ROW*COL- bomb_count;
	while (finally)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{
				printf("Õ¨µ¯À´ÁË\n");
				break;
			}
			else
				show[x][y] =count(board,x,y)+'0';
			Displayboard(show, ROWS, COLS);
			finally--;
		}
		else
			printf("ÊäÈë´íÎó\n");
	}
	if(finally==0)
	printf("success\n");
}
