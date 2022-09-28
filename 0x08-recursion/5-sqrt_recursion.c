#include <stdio.h>
#include "main.h"

/**
 * _sqrt - finds the natural square root of an inserted number
 * @num: number used
 * @root: root to be tested
 * Return: If the number has a natural square root - the square root, if the number does not have a natural square root - -1.
 */
int sqrt(int num, int root)
{
	if((root * root) == num)
		return(root);

	if (root == num / 2)
		return(-1);

	return(sqrt(num, root + 1));
}

/**
 * sqrt_recursion - if @n does not have a natural square root, the function should return -1
 * @n: the number used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return(-1);

	if (n == 1)
		return(1);
	return(sqrt(n, root));
}
