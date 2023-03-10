#include "main.h"

/**
 * main - entrypoint of our function
 * @argc: args count
 * @argv: args array pointer
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *c = argv[0];
	(void)argc;

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
