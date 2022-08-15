#include "main.h"
/**
 *print_line - print line with n spaces long
 *@n: integer
 *
 *Return: print line n space long to stdout, print newline if n<=0
 */
void print_line(int n)
{
	int how_many = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (how_many <= n)
		{
			_putchar('_');
			how_many++;
		}
		_putchar('\n');
	}
}
