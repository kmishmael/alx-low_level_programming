#include <stdio.h>

/**
 * cap_string - captilizes string
 * @s: character pointer
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i = 0;
	int now = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
			       || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
			      s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			now = 1;
			i++;
			continue;
		}

		if (now == 1)
		{
			if (s[i] >= 97)
			{
				int n = s[i] % 97;

				s[i] = 65 + n;
			}
			now = 0;
		}
		i++;
	}
	return (s);
}
