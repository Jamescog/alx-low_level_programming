#include "main.h"
/**
 * _abs - Computes the absoult value of an integer
 *
 *
 * @n: a number to which absolute value is computed
 *
 *
 * Return: abs value of the given number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
