#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char rot13[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
