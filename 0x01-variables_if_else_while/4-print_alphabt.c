#include <stdio.h>
/*
 * main - print alphabet except e and q
 * @letter - single alphabet
 * return - 0 as success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		else
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
