#include <stdio.h>
/*
 * main - Print alphabet in lower and uppercases
 * @letter - single upper or lowercase
 * return - 0 as success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
