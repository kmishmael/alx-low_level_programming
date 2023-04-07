#include "main.h"
#include <string.h>

/**
 * power - calculates power
 * @a: base
 * @b: raise
 * Return: int
 */
unsigned int power(int a, int b)
{
	int i = 0;
	unsigned int p = 1;

	while (i < b)
	{
		p *= a;
		i++;
	}
	return (p);
}
/**
 * binary_to_uint - converts binary to uint
 * @b: char pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int c = strlen(b);
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0, i = 0; (j < c) && (b[j] != '\0'); j++)
	{
		if (b[j] == '0')
			continue;
		else if (b[j] == '1')
		{
			i += power(2, c - 1 - j);
		} else
		{
			return (0);
		}
	}
	return (i);
}
