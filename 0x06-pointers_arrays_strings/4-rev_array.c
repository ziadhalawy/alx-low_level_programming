#include "main.h"

/*
 * reverse_array - prog to reverse array
 * @*a: input pointer
 * @n: second input
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
