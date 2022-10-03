#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -> creates an array
 * @size: size of an array
 * @c: character argument
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size > 0)
		p = malloc(size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
