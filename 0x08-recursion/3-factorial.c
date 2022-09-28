#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: number used
 *
 * Return: the factorial of @n
 */
int factorial(int n)
{
	int next_fac;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_fac = factorial(n - 1);
	return (n * next_fac)
}
