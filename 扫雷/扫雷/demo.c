#include"game.h"

void game()
{
	char core[ROWS][COLS] = { 0 };
	char showforplayer[ROWS][COLS] = { 0 };
	Initboard(core, ROWS, COLS,'0');
	Initboard(showforplayer, ROWS, COLS, '*');
	/*Displayboard(core, ROWS, COLS);*/
	Displayboard(showforplayer, ROWS, COLS);
	setboard(core, ROW, COL);
	/*Displayboard(core, ROWS, COLS);*/
	Findboard(core,showforplayer, ROWS, COLS);
	
}
void menu()
{
	printf("**************************************\n");
	printf("***1.PLAY********************2.QUIT***\n");
	printf("**************************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int intput = 0;
	menu();
	do
	{
		printf("������ѡ��:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (intput);
}
int main()
{
	test();
	return 0;
}