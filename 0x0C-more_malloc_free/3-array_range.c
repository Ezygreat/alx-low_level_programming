#include "main.h"
#include <stdlib.h>

/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new Array(A)
 * @min: min input
 * @max: max input
 *
 * Return: pointer to new arr of ints
 */

int *array_range(int min, int max)
{
	int *A;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	A = malloc(sizeof(int) * len);

	if (A == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		A[i] = min++;
	return (A);
}
