#include "main.h"
/**
 * print_alphabet - Prints alphabet in lowercases
 *
 * @letter - letter holder in the loop
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}

