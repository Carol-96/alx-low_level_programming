#include "main.h"
#include <stdio.h>

/**
 * factorial - function that gives factorial of number
 * @n: input number to be used
 * Return: returns factor or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
