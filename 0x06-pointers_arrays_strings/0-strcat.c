#include "main.h"

/**
 * strcat - concats 2 arrays
 *
 * @dest: destination of concat
 * @src: source of array
 *
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[y + x] = src[x];
	}
	dest[y + x] = '\0';

	return (dest);
}
