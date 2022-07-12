#include "main.h"

/**
 * sawp_int - swaps integers
 *
 * @a: integer one
 * @b: integer two
 */
void swap_int(int *a, int *b)
{
	int x = *b;
	int y = *a;
	*a = x;
	*b = y;
}
