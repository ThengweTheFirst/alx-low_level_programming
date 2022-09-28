#include <stdio.h>
#include "main.h"

/**
 * puts_recursion - prints a string followed by a new line.
 * @s: pointer to string.
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1)
	}
}
