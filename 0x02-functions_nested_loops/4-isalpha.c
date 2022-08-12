#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be checked
 * @check_1 - store first bool
 * @check_2 - store second bool
 * Return: 1 if exists, 0 otherwise
 */
int _isalpha(int c)
{
	int check_1, check_2;

	check_1 = (c >= 'A' && c <= 'Z');
	check_2 = (c >= 'a' && c <= 'z');
	if (check_1 || check_2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

