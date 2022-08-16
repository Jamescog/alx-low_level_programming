#include "main.h"
/**
 *_strlen - return the length of a string
 *@s: character
 *Return: length os string
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
