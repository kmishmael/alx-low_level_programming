#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 64)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
