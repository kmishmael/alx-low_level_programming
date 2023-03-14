#include "main.h"
#include "string.h"

/**
 * _strdup - return a pointer to a new string
 * @str: string pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *s = malloc(sizeof(char) * size);
	int i = 0;

	while (*str != '\0')
	{
		s[i] = *str;
		str++;
		i++;
	}
	return (s);
}
