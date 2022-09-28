#include <stdio.h>
#include "main.h"

/**
 * _factorial - returns the factorial of a given number.
 * @n: the number used
 *
 * Return: the factorial of @n
 */

int factorial(int n)
{
	int output = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	output *= factorial(n - 1);

	return(output)
}

