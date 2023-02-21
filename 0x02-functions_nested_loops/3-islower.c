#include "main.h"

/**
 * _islower - function
 * Description: checks if function is lowercase
 * @c: int parameter
 * Return: int 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
