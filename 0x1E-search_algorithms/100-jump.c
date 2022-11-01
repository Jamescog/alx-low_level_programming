#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: - is a pointer to the first element of the array to search in
 * @size: - is the number of elements in array
 * @value: - is the value to search for
 * Return: the first index of the value in array
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int temp = 0;

	while (array[min(step, size) - 1] < value)
	{
		temp = step;
		step += sqrt(size);
		if (temp  >= size)
		{
			return (-1);
		}
	}
	while (array[temp] < size)
	{
		temp++;
		if (temp == min(step, size))
		{
			return (-1);
		}
	}
	
}