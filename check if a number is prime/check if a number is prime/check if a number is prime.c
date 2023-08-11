#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int k = 0;
	printf("please type a positive integer:");
	int i = 0;
	scanf("%d", &i);
	for (k = 2; k < i; k++)
	{
		if (i % k == 0)
		{
			printf("%d is not a prime number.", i);
			break;
		}
		else
		{
			printf("%d is a prime number.", i);
			break;
		}

	}
	return 0;
}