#include "main.h"
#include <stdio.h>

/**
 *Author - Mzwandile Sithebe
 *
 *strlen - returns the length of a string
 *Return: returns an integer that represents the length of the string
 */


int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
