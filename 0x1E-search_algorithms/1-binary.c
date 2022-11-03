#include "search_algos.h"
/**
 * binary_search - searchs for a value in a sorted array of integers using
 *                  Binary search algorithm
 * @array: array is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int mid;
	int i = 0;

	if (size == 0)
	{
		return (-1);
	}

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
			putchar('\n');
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		putchar('\n');
	}
	return (-1);
}
