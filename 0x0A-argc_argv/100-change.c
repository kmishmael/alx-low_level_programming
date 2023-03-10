#include "main.h"
#include <stdlib.h>

/**
 * main - entrypoint funtion
 * @argc: args size
 * @argv: args array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int rem;
	int c[5] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (i < 5)
	{
		rem = cents % c[i];
		coins += cents / c[i];
		cents = rem;
		i++;
	}
	printf("%d\n", coins);
	return (0);
}
