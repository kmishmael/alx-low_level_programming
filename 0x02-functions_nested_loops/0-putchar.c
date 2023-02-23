#include "main.h"

/**
 * main - Entry point
 * Description: main function
 * Return: 0
 */
int main(void)
{
	char string[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
