#include "main.h"
/**
 * _puts_recursion - display "Puts with recursion"
 * @s: the string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
