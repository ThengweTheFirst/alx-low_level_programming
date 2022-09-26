#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length odf a prefix substring
 * @s: contains bytes from @accept
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in the initial segment of @s which consist only of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

