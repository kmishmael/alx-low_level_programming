#include "main.h"

/**
 * print_alphabet - print alphabet
 * Description: prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
