#include "main.h"
/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	
	_Putchar('\n');
}
