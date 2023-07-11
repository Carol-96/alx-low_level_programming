#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function returns a pointer to a new duplicate string
 * @str : char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cool;
	int i, c = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	cool = malloc(sizeof(char) * (i + 1));

	if (cool == NULL)
		return (NULL);

	for (c = 0; str[c]; c++)
		cool[c] = str[c];

	return (cool);
}
