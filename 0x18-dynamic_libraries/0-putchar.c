#include "main.h"

/**
 * _putchar - writes char to std output stream
 * @c: char tp be written to output stream
 * Return: returns output of write fn
 */
int _putchar(char c)
{
	int res;

	res = write(1, &c, 1);
	return (res);
}
