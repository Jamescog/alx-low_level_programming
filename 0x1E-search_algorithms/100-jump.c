#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of
 * @array: - is a pointer to the first element of the array to search in
 * @size: - is the number of elements in array
 * @value: - is the value to search for
 * Return: the first index of the value in array
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t now = 0;
	size_t temp;

	if (size == 0)
	{
		return (-1);
	}
	while (array[now] < value)
	{
		if (now >= size)
		{
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", now, array[now]);
		now = now + step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", now - step, now);
	temp = now - step;
	while (temp <= now && temp < size)
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		if (array[temp] == value)
		{
			return (temp);
		}
		temp++;
	}
	return (-1);
}
