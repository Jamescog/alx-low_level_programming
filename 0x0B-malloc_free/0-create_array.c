#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and
 * intitializes it with specific char.
 *
 * @size: size of chars.
 * @c: character.
 * Return: NULL if size is zero, pointer to array if success else null.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(c));

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
			return (ptr);
		}
	}
}
