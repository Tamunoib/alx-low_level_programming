#include <stdio.h>
#include "main.h"

/**
 * _putchar - writess the character c to stdout
 * @c: The chareacter to print
 *
 * Return: On success 1.
 * on error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
