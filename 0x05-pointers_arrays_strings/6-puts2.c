#include "main.h"

/*
 * main - print num and void one
 *
 * return always 0;
 */

void puts2(char *str)
{
	int i;

    for (i = 0; str[i] != '\0'; i+=2 ) 
     {
        _putchar(str[i]);
         
     }
_putchar('\n');

}

