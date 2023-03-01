#include <string.h>
/**
 * _strcmp - compare strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, ret;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	ret = s1[i] - s2[i];
	return (ret);
}
