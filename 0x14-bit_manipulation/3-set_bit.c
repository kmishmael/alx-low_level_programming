#include "main.h"
#include <math.h>

/**
 * set_bit - sets the value of a bit to 1 at a
 * given index
 * @n: unsigned long int pointer
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 64)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
