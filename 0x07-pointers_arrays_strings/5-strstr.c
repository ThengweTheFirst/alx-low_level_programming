#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first ocurrence of the substring @needle in the string @haystack
 * @haystack: string to be searched
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located substring or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

