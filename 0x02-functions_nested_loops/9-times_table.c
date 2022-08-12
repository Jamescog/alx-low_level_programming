#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, column, mul;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			mul = row * column;
			if (mul <= 9)
			{
				if (row == 9)
				{
					_putchar(' ');
					_putchar((mul % 10) + '0');
				}
				else
				{
					_putchar((mul % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (row == 9)
					continue;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
