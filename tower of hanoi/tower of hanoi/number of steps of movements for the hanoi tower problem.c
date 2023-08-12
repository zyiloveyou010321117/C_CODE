//Problem of Tower of Hanoi:There are three rods and n disks with distinct size.
//Only one disk may be moved at a time.
//Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
//No disk may be placed on top of a disk that is smaller than it.
//For n disks the number of movement should be 2^n-1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int step(int n)
{
	if (n <= 1)
		return 1;
	else
	return 2 * (step(n - 1) + 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("Number of the disks is ", n);
	scanf("%d", &n);
	ret = step(n);
	printf("It takes at least %d steps.", ret);
	return 0;
}