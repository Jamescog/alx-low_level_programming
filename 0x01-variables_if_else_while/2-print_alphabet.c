#include <stdio.h>
/*
 * main: prints alphabet in small letters
 * @character - single character in alphabet
 * return: 0 as success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
