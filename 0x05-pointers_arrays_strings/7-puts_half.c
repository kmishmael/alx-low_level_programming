#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - half
 * @str: last half of string
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int n, i;

	if (len % 2 == 0)
	{
		n = len / 2;
	} else
	{
		n = (len - 1) / 2;
	}
	i = len - n;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
