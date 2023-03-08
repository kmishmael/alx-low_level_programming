#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: character pointer array
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	static int counter = 1;
	int len = strlen(s);

	if (*s == '\0')
	{
		return;
	}

	_putchar(s[len - counter]);
	counter++;
	_print_rev_recursion(s + 1);
}
