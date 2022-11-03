#include "search_algos.h"
/**
 * interpolation_search - search for a value using interpolation search
 * @array: the pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the first index where the value is located
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low  = 0;
	size_t pos = 0;

	if (size == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		pos =  low + (((double)(high - low) / (array[high] - array[low]))
					* (value - array[low]));
		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
		{
			low = low + 1;
		}
		else
		{
			high = high - 1;
		}
	}
	return (-1);
}
