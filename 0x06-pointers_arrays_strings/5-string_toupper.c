
/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	int i = 0; 

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] < 123)
		{
			int n = s[i] % 97;
			s[i] = 'A' + n;
		}
		i++;
	}
	return s;
}
