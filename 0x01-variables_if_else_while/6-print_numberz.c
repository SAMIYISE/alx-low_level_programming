#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 *
 */
int main(void)
{
	int x = 0;

	for (; x < 10 ; x++)
		putchar('0' + x);
	putchar('\n');
	return (0);
}
