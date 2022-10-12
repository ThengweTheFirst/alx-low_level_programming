#include "3-calc.h"

/**
 * op_add - return the sum of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: Sum of
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> return difference of two values
 * @a: first integer
 * @b: second integer
 * Return: difference of
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> return product of two values
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -> return quotient of two values
 * @a: first integer
 * @b: second integer
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a  / b);
}

/**
 * op_mod -> return remainder after division
 * @a: first integer
 * @b: second integer
 * Return: modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
