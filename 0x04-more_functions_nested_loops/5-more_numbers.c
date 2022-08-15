#include "main.h"
/**
 *more_numbers - prints 10 times the numbers fron 0 to 14
 *
 */
void pputchar(int num)
{
	if (num / 10)
	{
		pputchar(num / 10);
	}

	_putchar((num % 10) + '0');
}
void more_numbers(void)
{
	int counter, num;

	counter = 1;
	while (counter <=10)
	{
		for (num = 0; num <= 14; num++)
		{
			pputchar(num);
		}
		_putchar('\n');
		counter++;
	}
	
}
