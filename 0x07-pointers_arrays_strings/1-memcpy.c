#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 * @dest: destination
 * @src: source
 * @n: maxium number of bytes to be used
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

