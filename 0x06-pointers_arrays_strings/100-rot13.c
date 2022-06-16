#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	int a = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + a) == letters[i])
			{
				*(str + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	return (str);
}
