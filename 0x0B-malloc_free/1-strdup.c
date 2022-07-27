#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string
 * Return: char to new duplicated string
 */
char *_strdup(char *str)
{
	char *c;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}

	c[len] = '\0';

	return (c);

}

