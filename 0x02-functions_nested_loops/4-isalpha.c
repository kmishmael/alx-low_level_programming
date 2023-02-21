#include "main.h"

/**
 * _isalpha - checks is alphabet
 * Description: if is an alphabet
 * @c: int parameter
 * Return: int 1 if alphabet else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
