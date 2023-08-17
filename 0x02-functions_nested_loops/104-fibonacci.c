#include <stdio.h>

/**
 * main: Entry point
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *  Return: 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("1,2,");

	while (count < 98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count++;
	}
	printf("%d\n", a + b);
	return (0);
}
