#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int i = 0;

	while (dest[count] != '\0')
	{
		i++;
		count++;
	}
	count = 0;
	while (src[count] != 0)
	{
		dest[i] = src[count];
		i++;
		count++;
	}

	return (dest);
}
