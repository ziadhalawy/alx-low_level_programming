#include "main.h"

#include <string.h>

 /*main - return the length of string
  *
  * return always 0
  */

int _strlen(char *s)
{
	int counter;

	for(counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);


}

