#include <stdio.h>

/**
 * main - Prints the alphabets without q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == 'q' || b == 'e')
		{
			continue;
		}
		putchar(b);	
	}
	putchar('\n');
	return (0);
}

