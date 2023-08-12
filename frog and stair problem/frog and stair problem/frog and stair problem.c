#define _CRT_SECURE_NO_WARNINGS
// A frog is going to climb n stairs. The frog can move 1 stair or 2 stairs in one jump. How much combinations of jumping strategy can the frog have£¿
// If n == 1, ret == 1. If n == 2, ret == 2. If n == 3, ret == 3 == 2+1. Conclusion str(n)=str(n-1)+str(n-2).
#include <stdio.h>
int str(int n)
{
	int a = 1;
	int b = 2;
	int c = n;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
	if (n <= 2)
	{
		return n;
	}
}
int main()
{
	printf("Stair number is");
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = str(n);
	printf("There are %d strategies",ret);
	return 0;
}