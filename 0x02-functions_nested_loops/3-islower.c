#include "main.h"
/**
 * _islower - main function
 *
 * @c: comparison character
 *
 * Return: 1 if true, 0 if false
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
