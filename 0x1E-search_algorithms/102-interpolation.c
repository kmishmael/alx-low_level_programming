#include "search_algos.h"
#include <stddef.h>

/**
 * interpolation_search - interpolation search algorithm
 * @array: input array
 * @size: length of array
 * @value: the value to look for
 * Return: index of @value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
