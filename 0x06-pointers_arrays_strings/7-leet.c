
/**
 * leet - encode to leet
 * @s: character array pointer
 * Return: encodede array
 */
char *leet(char *s)
{
	char st[5] = {'a', 'e', 'o', 't', 'l'};
	char st2[5] = {'A', 'E', 'O', 'T', 'L'};
	int en[] = {'4', '3', '0', '7', '1'};
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (j < 5)
		{
			if (s[i] == st[j] || s[i] == st2[j])
			{
				s[i] = en[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
