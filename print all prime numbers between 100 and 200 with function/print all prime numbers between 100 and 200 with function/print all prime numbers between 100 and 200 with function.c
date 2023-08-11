#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	int k = 0;
	for (k= 2; k<=sqrt(n); k++)
	{
		if (n % k == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}