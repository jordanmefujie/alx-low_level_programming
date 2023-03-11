#include "main.h"
/**
 * _puts - Prints a string
 * @str: String to be printed
 * Return: empty
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
