#include "main.h"

/**
 * reverse_array - a function that reverses the content of
 * an array of integers
 *
 * @a: array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int s, e;

	for (s = 0; s < (n - 1) / 2; s++)
	{
		e = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = e;
	}
}
