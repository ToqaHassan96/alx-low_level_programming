#include "main.h"

/**
 * print_sign - print + if n is greater than zero.
 * - if n is zero and - if n is less
 *   than zero
 *
 *   on: takes integer types input for function.
 *
 *   Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sing(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n ==0)
	{
_putcher(48);
return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}
