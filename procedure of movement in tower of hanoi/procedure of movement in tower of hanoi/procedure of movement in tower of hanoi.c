#define _CRT_SECURE_NO_WARNINGS
//Suppose the robs are A,B,C.We need to move all disks from a to c and follow the rules.
//If n=1 A->C
//If n=2 A->C, A->B, B->C
//If n=3 A->C, A->B, C->B, A->C, B->A, B->C, A->C.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c->%c\n", A, C);
	}
	else
	{
		move(n - 1, A, C, B);
		printf("%c->%c\n", A, C);
		move(n - 1, B, A, C);
	}
}
int main()
{
	int n = 0;
	printf("The number of disks is ");
	scanf("%d", &n);
	move(n, 'A', 'B', 'C');
	return 0;
}