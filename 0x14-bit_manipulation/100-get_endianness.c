#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: int
 */
int get_endianness(void)
{
	int test = 1;
	char *firstByte = (char *)&test;

	if (*firstByte)
	{
		return (1);
	}
	return (0);
}
