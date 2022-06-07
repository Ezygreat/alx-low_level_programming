#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *	ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			d = b + 1;
			c = a;
			for (; c < 58; c++)
			{
				for (; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != 57 || c != 57 || b != 56 || d != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
