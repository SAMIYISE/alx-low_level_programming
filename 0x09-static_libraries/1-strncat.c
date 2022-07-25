#include "main.h"

/**
 * _strncat - function
 *
 * @dest: destination to copy
 * @src: source
 * @n: amount to copy
 *
 * Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';
	return (dest);
}
