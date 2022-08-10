#include <stdio.h>
/*
 * main - prints all single digit numbers of base 10
 * @num - number in loop
 * return - 0 as success
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
