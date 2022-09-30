#include <stdio.h>
#include "main.h"

/**
 * main -> print name of program
 * @argc: Count arguments
 * @argv: Arguments
 * Auth: Mondliwethu Vundla
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;/*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
