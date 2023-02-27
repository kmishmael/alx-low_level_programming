#include "main.h"
#include <string.h>
/**
 * print_rev - reverse
 * @s: char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	_putchar('\n');
}

