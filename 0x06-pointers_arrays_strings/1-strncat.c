#include <string.h>

/**
 * _strncat - cancatenate string
 * @dest: character pointer
 * @src: character pointer
 * @n: integer pointer
 * Return: character pointer to array
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
