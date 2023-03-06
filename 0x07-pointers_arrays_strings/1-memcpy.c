
/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: unsigned int
 * Return:char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
