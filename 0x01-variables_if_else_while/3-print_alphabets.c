#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	putchar(alphabets);
	putchar('\n');
	return (0);
}
