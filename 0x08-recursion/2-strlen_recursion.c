#include "main.h"

/**
*_strlen_recursion -> calcutes the len of string
*@s: string used
*Return: len of string
*/

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
