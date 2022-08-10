#include <stdio.h>
/*
 * main - Print all single digit number of base 10
 * @num - number in the loop
 * return - 0 as success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
