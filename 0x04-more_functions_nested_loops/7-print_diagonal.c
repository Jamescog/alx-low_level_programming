#include "main.h"
/**
 *print_diagonal - print a diagonal line on the terminal
 *@n: integer
 */
void print_diagonal(int n)
{

	int x, y, num;

	x = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	_putchar('\\');
		while (x < n+1)
		{
			y = x;
			for (num =1; num <= y-2; num++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			x++;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
