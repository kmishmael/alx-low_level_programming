#include "search_algos.h"

void print_array(int *array, int left, int right);

/**
 * binary_search - binary search algorithm
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to look for
 * Return: the index @value is found in, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t median;

	while (array != NULL && left <= right)
	{
		print_array(array, left, right);
		median = (int)((left + right) / 2);
		if (array[median] < value)
		{
			left = median + 1;
		}
		else if (array[median] > value)
		{
			right = median - 1;
		}
		else
		{
			return (median);
		}
	}
	return (-1);
}

/**
 * print_array - print an array
 * @array: the array to print
 * @left: left limit
 * @right: right limit
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i = left;

	printf("Searching in array: ");
	while (array != NULL && i <= right)
	{
		if (i == left)
		{
			printf("%d", array[i]);
		}
		else
		{
			printf(", %d", array[i]);
		}
		i++;
	}
	printf("\n");
}
