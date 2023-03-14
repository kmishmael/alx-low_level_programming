#include "main.h"

/**
 * create_array - creating array
 * @size: size of array
 * @c: char
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
