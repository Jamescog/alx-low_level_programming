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
		-putchar(letter);
	}
	-putchar('\n');

	return (0);
}

