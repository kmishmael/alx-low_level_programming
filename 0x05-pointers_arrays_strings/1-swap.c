#include "main.h"

/**
 * swap_int - swaps two pointers
 * @a: int pointer
 * @b: int pointer
 * Returns: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
