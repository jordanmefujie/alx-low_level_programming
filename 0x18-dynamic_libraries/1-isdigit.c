#include "main.h"
/**
 * _isdigit - check if a character is a digit
 * @c: The number to be checked
 * return: 1 for a character that will be a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
