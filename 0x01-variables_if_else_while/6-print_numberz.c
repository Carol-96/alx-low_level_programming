#include <stdio.h>

/**
 * main - Prints all single digits of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}

