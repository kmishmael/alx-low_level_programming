#include "main.h"

/**
 * positive_or_negative - checks if number os positive or negative
 * @i: int paramter
 * @Returns: void
 */
void positive_or_negative(int i)
{
	if (i > 2)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
