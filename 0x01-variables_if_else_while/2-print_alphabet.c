#include <stdio.h>

/**
 * main  - Entry point
 *
 * Description - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	alphabets = 'a';
	while (alphabets <= 'z')
	{
	putchar(alphabets);
	alphabets++;
	}
	putchar('\n');
	return (0);
}
