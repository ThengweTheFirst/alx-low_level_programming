#include <stdio.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area with the constant byte @b pointed by @s.
 * @s: A pointer that enables the memory area to be filled.
 * @b: The character that fills the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

