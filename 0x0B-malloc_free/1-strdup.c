#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns aa pointer to a new string which is a duplicate of the string @str
 * @str: string duplicated
 *
 * Return: NULL if @str = NULL, on success the _strdup function returns a pointer to the duplicated string. it returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return(NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return(NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	
	return(nstr);
}
