#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string @s of any of the bytes in the string @accept
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept[j]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}

