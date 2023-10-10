#include "search_algos.h"

/**
 * linear_search - linear search algorith
 * @array: array to search through
 * @size: the size of the array
 * @value: the value to look for
 * Return: the first index where the value is located, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array != NULL && i  < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
