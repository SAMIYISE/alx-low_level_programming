#include "main.h"

/**
 * _strlen - get character string
 *
 * @s: character string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
