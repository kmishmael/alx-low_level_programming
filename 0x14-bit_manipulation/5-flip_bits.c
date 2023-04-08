#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int i = 0;

	res = n ^ m;
	while (res > 0)
	{
		if (res & 1)
		{
			i++;
		}
		res >>= 1;
	}
	return (i);
}
