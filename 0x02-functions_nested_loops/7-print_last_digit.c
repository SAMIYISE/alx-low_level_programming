#include "main.h"

/**
 * print_last_digit - main function
 *
 * @x: integer to get last digit
 * Return: last digit of x
 *
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;
	y = x % 10;
	_putchar(x + '0');
	return (y);
}
