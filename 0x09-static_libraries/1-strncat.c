#include "main.h"

/**
 * _strncat - Concatenates two strings,
 *
 * @dest: Destination.
 *
 * @src: Source.
 *
 * @n: Amount of bytes used from src.
 *
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;
	while (*(dest + x) != '\0')
		x++;
	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}
