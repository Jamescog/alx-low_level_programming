#include "main.h"
/**
 * is_lower - Checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if present, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
