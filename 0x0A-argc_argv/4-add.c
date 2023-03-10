#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entrypoint function
 * @argc: argument c
 * @argv: args array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	i = 1;

	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
