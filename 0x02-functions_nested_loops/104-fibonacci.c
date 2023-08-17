#include <stdio.h>

int main()
{
	int a = 1, b = 2, c, count = 2;
	printf("1,2,");
	while(count <98)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
		count ++;
	}
	printf("%d\n", a + b);
	return 0;
}
