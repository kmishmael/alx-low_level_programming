#include "main.h"
#include <stdio.h>

/**
 * puts2 - print char
 * @str: char pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
