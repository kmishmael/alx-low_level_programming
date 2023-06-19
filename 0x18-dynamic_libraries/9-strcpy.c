#include "main.h"

/**
 * _strcpy - copy text
 * @dest: destination array pointer
 * @src: source array pointer
 * Return: pointer to destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
