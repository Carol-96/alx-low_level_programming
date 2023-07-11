#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **let;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	let = malloc(sizeof(int *) * height);

	if (let == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		let[a] = malloc(sizeof(int) * width);

		if (let[a] == NULL)
		{
			for (; a >= 0; a--)
				free(let[a]);

			free(let);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			let[a][b] = 0;
	}

	return (let);
}
