#include <string.h>
/**
 * _strcmp - compare strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len = strlen(s1);

	while (i < len)
	{
		if (s1[i] > s2[i])
			return (15);
		if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	return (0);
}
