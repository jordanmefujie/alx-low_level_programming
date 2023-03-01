#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @a: The first int to be swapped
 * @b: the second int to be swapped
 *
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
		*b = temp;
}
