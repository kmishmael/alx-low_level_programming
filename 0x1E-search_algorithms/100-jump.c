#include "search_algos.h"
#include <math.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * jump_search - jump search algorithm
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to look for
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = 0;
	size_t step = sqrtf(size);

	if (array == NULL || size == 0)
		return (-1);
	for (i = jump = 0; array[jump] < value && jump < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

		printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
