#include "main.h"

/**
*_pow_recursion -> returns value of x raiesd to the power of y
*@x: number given
*@y: exponent of number given
*Return: x ^ y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
