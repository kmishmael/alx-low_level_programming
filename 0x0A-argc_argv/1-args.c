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
	printf("%d\n", num - 1);
	return (0);
}
