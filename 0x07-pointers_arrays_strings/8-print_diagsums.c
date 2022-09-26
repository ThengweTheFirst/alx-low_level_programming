#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, s = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}
	
	a = size;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		a = size;
	}

	printf("%d, %d\n", j, s);
}

