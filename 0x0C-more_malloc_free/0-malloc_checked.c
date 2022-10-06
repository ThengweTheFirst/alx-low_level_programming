#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	n = malloc(b);
	if (n == NULL)
		exit(98);
	return(n);
}
