#include "main.h"
/**
 * _isupper - check if a letter is uppercase
 * @c: the number to be checked
 * Return: 1 for uppercase letter and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
