#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("**** 1. play   0. exit ****\n");
	printf("***************************\n");
}



//the function for the game
void game()
{
	//restore the information from the board
	char ret = 0;
	//all empty
	char board[ROW][COL] = { 0 };
	//initialize the board
	InitBoard(board, ROW, COL);
	//print the board
	DisplayBoard(board, ROW, COL);
	//move
	while (1)
	{
		//player move
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//check if the player win
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//computer  move
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//check if the computer win
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("player win\n");
	}
	else if (ret == '#')
	{
		printf("computer win\n");
	}
	else
	{
		printf("draw\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose ");
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