#include "main.h"

/**
 * main - entrypoint
 * @argc: arguments count
 * @argv: arguments array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		char *c = argv[i];

		while (*c != '\0')
		{
			_putchar(*c);
			c++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
