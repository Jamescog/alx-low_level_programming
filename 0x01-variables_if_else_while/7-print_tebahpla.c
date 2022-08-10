#include <stdio.h>
/*
 * main - print alphabet in reversed order
 * @letter - single character in alphabet
 * return - 0 as success
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
