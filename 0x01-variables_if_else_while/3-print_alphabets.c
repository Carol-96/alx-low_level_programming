#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}

