#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	int fub1 = 1;
	int fib2 = 2;
	int sumFib = fib 1 fib2;


	printf("%d\n%d\n", fib1, fib2);

	while (sumFib <= 4000000)
	{
	printf("%d\n", sumFib);
	fib1 = fib2;
	fib2 = sumFib;
	sumFib = fib1 + fib2;
	}

	printf("\n");

	return (0);
}
