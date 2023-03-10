#include "main.h"
#include <stdlib.h>

/**
 * main - entrypoint of our application
 * @argc: arguments size
 * @argv: arg array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc < 3)
	{
		char c[5] = "Error";
		int i = 0;

		while (i < 5)
		{
			_putchar(c[i]);
			i++;
		}
		_putchar('\n');
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
