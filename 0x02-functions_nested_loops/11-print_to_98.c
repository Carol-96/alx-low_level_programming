#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - Prints all numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function prints all numbers from the given
 * starting number n to 98, inclusive, separated by commas.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
