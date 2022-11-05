#include "search_algos.h"
/**
 * b_search - binary search algorithm implementation
 * @array: array in which algorith is implemented
 * @high: higher index of the bound
 * @low: lower index of the bound
 * @value: value to search for
 * Return: the first index of value located
*/
int b_search(int *array, int high, int low, int value)
{
	int mid, i;

	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[mid] == value)
		{
			printf("\n");
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
		printf("\n");
	}
	return (-1);
}
/**
 * exponential_search - search for a value in a sorted array
 * @array: the pointer to the first element of the array
 * @size: the number of elements of array
 * @value: the value to search for
 * Return: the first index where value is located
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t j;

	if (size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		return (0);
	}
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i > size - 1)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
	}
	j = i / 2;

	if (i > size - 1)
	{
		i = i - 1;
	}
	return (b_search(array, i, j, value));
}
