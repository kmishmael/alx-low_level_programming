#include "main.h"

/**
 * main - Entry point
 * Description: main function
 * Return: 0
 */
int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
