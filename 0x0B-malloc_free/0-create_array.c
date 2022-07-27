#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	x = malloc(sizeof(char) * size);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		x[i] = c;

	return (x);
}

