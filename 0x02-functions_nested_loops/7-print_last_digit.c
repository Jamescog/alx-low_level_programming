#include "main.h"
/**
 * print_last_digit - Prints last digit of number
 *
 * @n: a number whose last digit is printed
 *
 *
 * Return: last number of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
