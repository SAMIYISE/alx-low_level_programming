#include "main.h"

/**
 * _isupper - cheacks uppercase
 *
 * @c: character
 *
 * Return: 1 if c is uppercase or 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
