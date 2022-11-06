#include "search_algos.h"
/**
 * linear_search - searchs for a value in an array of integers
 *                  using the Linear search algorithm
 * @array: array to be searched
 * @size: the size of an array
 * @value: the value of the search
 * Return: the index of the array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
