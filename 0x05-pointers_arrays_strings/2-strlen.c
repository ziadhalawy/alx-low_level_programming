#include "main.h"

#include <string.h>

/*
 * _strlen - return the length of string
 *@s: string paramter pointer input
 * return length
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);


}

