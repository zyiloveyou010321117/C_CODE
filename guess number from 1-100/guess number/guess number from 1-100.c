#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************************\n");
	printf("****   1.play    0.exit   ****\n");
	printf("******************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while(1)
	{
		printf("guess the number");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("too big\n");
		}
		else if (guess < ret)
		{
			printf("too small\n");
		}
		else
		{
			printf("congratulation! it is %d", ret);
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("exit the game\n");
				break;
			default:
				printf("wrong choice\n");
				break;
		}
	} while (input);
	return 0;
}
