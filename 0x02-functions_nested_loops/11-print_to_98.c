#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * pputchar_integer - Take care the printing using _putchar
 * @n: The number to begin counting at.
 */
void pputchar_integer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n *-1;
	}
	if (n/10)
	{
		pputchar_integer(n / 10);
	}
	_putchar((n % 10) + '0');

}
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			pputchar_integer(n);
			if (n == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}

	}
	else
	{
		while (n > 97)
		{
			pputchar_integer(n);
			if (n == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}

	}
	_putchar('\n');
}

