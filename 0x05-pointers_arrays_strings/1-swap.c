#include "main.h"
/**
 * swap_int - a function swaps the values of two integers
 * @a: a variable swaps to another one called b
 * @b: a variable swaps to another variable a
 */
void swap_int(int *a, int *b)
{
	int swap_k;

	swap_k = *a;
	*a = *b;
	*b = swap_k;
}
