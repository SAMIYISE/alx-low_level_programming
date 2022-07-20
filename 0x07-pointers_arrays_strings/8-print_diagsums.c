#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: array
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size * size; x += size)
	{
		sum1 += a[x + y];
		sum2 += a[x + (size - 1) - y];
		y++;
	}
	printf("%d, %d\n", sum1, sum2);
}
