#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: pointer to newly allocated memory which has s1, s2 and NULL byte. NULL on faliure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, size, x, y;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;

	size = a + b;

	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
		return(NULL);

	x = 0;
	while (x < a)
	{
		nstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (y <= size)
	{
		nstr[a] = s2[y];
		x++;
		y++;
	}
	return(nstr);
}

