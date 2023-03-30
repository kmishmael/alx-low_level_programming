#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to list_t struct
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int nodes;
	char *nil = "[0] (nil)\n";
	char *str;
	unsigned int i;

	if (h == NULL)
		return (-1);
	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			while (*nil != '\0')
			{
				_putchar(*nil);
				nil++;
			}
		}
		else
		{
			str = malloc(sizeof(char) * h->len);
			if (str != NULL)
			{
				str = h->str;
				_putchar('[');
				_putchar(h->len + '0');
				_putchar(']');
				_putchar(' ');
				for (i = 0; i < h->len && str[i] && str[i] != '\0'; i++)
				{
					_putchar(str[i]);
				}
				_putchar('\n');
			}
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
