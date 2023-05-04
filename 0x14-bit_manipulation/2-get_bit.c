#include "main.h"

/**
 * get_bit - returns the bit value at a given index
 * @n: base 10 number
 * @index: index to be returned
 * Return: int, base 2 bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*
	 * using 64-bit system, the maximum index should
	 * thus be at most 64
	 */
	if (index >= 64)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
