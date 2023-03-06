
/**
 * _memset - fill memory with const byte
 * @s: char pointer array
 * @b: character
 * @n: unsigned int
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int c = n;

	if (c < 0)
		c = -n;
	while (s[i] != '\0' && i < c)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
