#include "main.h"


/**
 * _islower - check if char is uppercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */


	int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
		else
			return (0);
	}

