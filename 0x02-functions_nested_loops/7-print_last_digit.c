#include "main.h"

/**
 * print_last_digit - print last digit integer
 * @c: integer parameter
 * Return: int
 */
int print_last_digit(int c)
{
	int last = n % 10;

	if (n < 10)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
