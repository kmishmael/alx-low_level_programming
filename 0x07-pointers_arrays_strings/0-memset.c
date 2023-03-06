/**
 * _memset - fill memory with const byte
 * @s: char pointer array
 * @b: character
 * @n: unsigned int
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
