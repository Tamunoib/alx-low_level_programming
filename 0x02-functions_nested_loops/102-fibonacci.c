#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, temp;

	printf("%d, %d,", fib1, fib2);

	for (int i = 3; i <= 50; i++)
	{
		temp = fib1 + fib2;
		printf("%d", temp);
		if (i != 50)
		{
			printf(",");
		}
		fib1 = fib2;
		fib2 = temp;
	}
	printf("\n");
	return (0);
}
