#define _CRT_SECURE_NO_WARNINGS 1

//We want the board to be 9*9,so the board should be 11*11, two blocks outside 9*9 are all field with 0.
//ROWS*COLS is the 11*11 board;ROW*COL is the 9*9 board inside.

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("****  1.play      0.exit  ****\n");
	printf("******************************\n");
}

void game()
{
	//restore the information of mines
	char mine[ROWS][COLS] = { 0 };
	//restore the information of mines after clearance
	char show[ROWS][COLS] = { 0 };
	//initialize the board
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//print the board
	DisplayBoard(show, ROW, COL);
	//set the mines
	SetMine(mine, ROW, COL);
	//find the mines
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("Please choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("wrong choice\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}