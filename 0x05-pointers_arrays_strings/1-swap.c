#include "main.h"
/**
 *  swap_int - swap the value of a and b using the pointer
 * @a: input paramter 1
 * @b: input paramter 2
 * Return Nothing
*/


void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

