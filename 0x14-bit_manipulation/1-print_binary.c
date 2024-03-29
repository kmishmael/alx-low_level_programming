#include "main.h"

/**
 * print_binary - prints the binary representation of
 * a number utilising recursion
 * @n: unsigned long int(decimal)
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);
	c = (n & 1) + '0';
	_putchar(c);
}
