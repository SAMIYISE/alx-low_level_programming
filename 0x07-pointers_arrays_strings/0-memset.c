#include "main.h"

/**
 * _memset - set memory
 * @s: array
 * @b: value to set
 * @n: amount of times
 *
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
