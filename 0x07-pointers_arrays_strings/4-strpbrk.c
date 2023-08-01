#include "main.h"

/*
 * _strpbrk - Entry point
 * @s: input buffer
 * @accept: input values to check from
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

