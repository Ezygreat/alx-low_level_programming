#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	A = malloc(nmemb * size);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		A[i] = 0;
	return (A);
}
