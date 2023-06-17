#include <stdio.h>

/**
 * main - Prints the base 16 in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10 ) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0)
}

