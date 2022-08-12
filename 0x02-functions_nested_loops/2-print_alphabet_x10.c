#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * @letter - letter holder in the loop
 * @num - loop counter
 */
void print_alphabet_x10(void)
{
	int num;
	char letter;

	for (num = 1; num <= 10; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

