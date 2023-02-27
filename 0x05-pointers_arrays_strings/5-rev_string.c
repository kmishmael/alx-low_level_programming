#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: character pointer
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = strlen(s) - 1;

	while (a < b)
	{
		char temp = *(s + a);
		*(s + a) = *(s + b);
		*(s + b) = temp;
		a++;
		b--;
	}
}
