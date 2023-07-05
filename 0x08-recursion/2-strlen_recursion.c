#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int pal = 0;

	if (*s)
	{
		pal++;
		pal += _strlen_recursion(s + 1);
	}
	return (pal);
}

