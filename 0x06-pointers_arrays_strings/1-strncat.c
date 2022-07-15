#include "main.h"

/**
 * _strncpy - function
 *
 * @dest: destination to copy
 * @src: source
 * @n: amount to copy
 *
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (dest);
}
