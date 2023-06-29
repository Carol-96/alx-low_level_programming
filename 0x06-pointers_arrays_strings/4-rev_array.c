#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
