#include "main.h"

/**
 * _strspn - length of preffix
 *  @s: string
 *  @accept: accept byte
 *
 *  Return: return unsigned value
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int result = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				result++;
				break;
			}
		}
		if (s[y] == '\0')
			return (result);
	}
	return (result);
}
