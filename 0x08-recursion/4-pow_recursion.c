#include <stdio.h>
#include "main.h"

/**
 * pow_recursion - returns the value of @x raised to the power of @y.
 * @x: the number used
 * @y: the exponent used
 *
 * Return: @x to the power @y
 */
int _pow_recursion(int x, int  y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
