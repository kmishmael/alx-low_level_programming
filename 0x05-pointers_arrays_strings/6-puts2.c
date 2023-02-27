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

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
