#include "main.h"
/**
 * main - entry function
 * @argc: arguments count
 * @argv: pointer to char array of cli arguments received
 * Return: int
 */
int main(int argc, char *argv[])
{
	char num = argc;

	(void)argv;
	_putchar(num + '0');
	_putchar('\n');
	return (0);
}
