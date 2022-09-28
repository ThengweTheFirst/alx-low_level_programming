#include <stdio.h>
#include "main.h"

/**
 * sqrt_recursion - if @n does not have a natural square root, the function should return -1
 * @n: the number used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @s: squared number
 *
 * Return: the square root of n
 */

int _sqrt(int n, int s)
{
	if (n > s / 2)
		return (-1);
	else if (n * n == s)
		return (n);
	return (_sqrt(n + 1, s));
}

