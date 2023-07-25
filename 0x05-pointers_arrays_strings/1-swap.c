#include "main.h"
/**
 *  swap_int- swap the value of a and b using the pointer
 * @a,n: string paramter to print
 * Return Nothing
*/


void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

