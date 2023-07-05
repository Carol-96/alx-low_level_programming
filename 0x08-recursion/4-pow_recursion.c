#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function gives the power of int
 * @x: integer to power
 * @y: power number
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
