#include "main.h"

/**
  * alloc_grid - two dimensional array
  * @width: variable
  * @height: variable
  * Return: NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(height * sizeof(int *));

	if (p != NULL)
	{
	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] != NULL)
			{
				for (j = 0; j < width; j++)
					p[i][j] = 0;
			}
		else
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
	}
	else
	{
		return (NULL);
	}
}
