#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		b++;
	concat = malloc(sizeof(char) * (i + b + 1));

	if (concat == NULL)
		return (NULL);
	i = b = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[b] != '\0')
	{
		concat[i] = s2[b];
		i++, b++;
	}
	concat[i] = '\0';
	return (concat);
}
