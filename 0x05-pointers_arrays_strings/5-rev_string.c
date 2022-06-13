#include "main.h"

/**
 * rev_string - a function that reverse a string
 *		followed by a new line.
 *
 * @s: an input string
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
		}
}
