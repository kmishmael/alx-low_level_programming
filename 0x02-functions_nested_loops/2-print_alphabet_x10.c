#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: print apphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j = 'a';

		while (j < 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
