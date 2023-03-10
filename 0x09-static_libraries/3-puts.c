#include "main.h"

/**
 * _puts - output a string
 * Description: output a string
 * @str: char pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
