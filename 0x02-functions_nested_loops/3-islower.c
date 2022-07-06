#include "main.h"

/**
 * _islower - main function
 *
 * @c: character to compair
 *
 * return: 1 for true, 0 for false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
