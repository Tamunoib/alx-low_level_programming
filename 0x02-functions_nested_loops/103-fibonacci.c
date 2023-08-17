#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c;
	int sum = 2; || starting with 2 because 2 is the first even - valued term

	while (b <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum + = c;
		}
		a = b;
		b = c;
	}

	printf("%d\n", sum);

	return (0);
}
