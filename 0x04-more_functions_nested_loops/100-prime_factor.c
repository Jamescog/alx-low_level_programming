#include <stdio.h>
/**
 * check_prime - checks if a number is prime
 *
 * @number - the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int check_prime(int number)
{
	int i;
	int counter = 0;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			counter++;
		}
	}
	if (counter >= 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/**
 *main - finds and prints the larges prime factor of the number
 *@void: no arguments
 *Return: zero
 */
int main(void)
{
	long int big_number, num, largest_prime;
	big_number = 612852475143;
	largest_prime = 1;

	for (num = 2; num <= big_number; num++)
	{
		if (big_number %  num == 0)
		{
			if (check_prime(num))
			{
				largest_prime = num;
			}
		}
	}
	printf("%ld\n", largest_prime);
	return (0);
}
