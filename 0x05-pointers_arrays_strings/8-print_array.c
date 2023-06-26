#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints elements of an array
 * @a: array to be printed
 * @n: number of array elements
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
