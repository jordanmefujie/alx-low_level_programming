#include "main.h"
#include <stdio.h>
/**
 * print_array - Print elements of array of integers
 * @a: Array to be printed
 * @n: Element to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
