#include"main.h"
/**
 *print_rev - print in reverse a string
 *@s:takes a string of characters
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c--; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');

}
