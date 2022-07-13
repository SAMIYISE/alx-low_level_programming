#include "main.h"

/**
 * print_rev - reverses string
 *
 * @s: string to print
 */
void rev_string(char *s)
{
	int i;
	
	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i ));
	}
	_putchar('\n');
}
