#include "main.h"
 /*main - swap the value of a to b using the pointer
  *
  * return always 0
  */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

