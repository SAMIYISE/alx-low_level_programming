#include "main.h"

/**
 * leet - leet
 * @s: string
 *
 * Return: character value
 */
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int x;
	int y;

	for (x = 0; s[i] != '\0'; i++)
	{
		for (y = 0; alphaArr[y] != '\0'; y++)
		{
			if (s[x] == alphaArr[y])
			{
				s[x] = alphaArr[y + 1];
				break;
			}
		}
	}
	return (s);
}
