#include "main.h"
#include <string.h>

/**
 * alloc_grid - 2d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: char pointer of pointer
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int *s2;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
		free(s);
		return (NULL);

	i = 0;
	while (i < height)
	{
		s2 = malloc(sizeof(int) * width);
		j = 0;
		while (j < width)
		{
			s2[j] = 0;
			j++;
		}
		s[i] = s2;
		i++;
	}
	return (s);
}
