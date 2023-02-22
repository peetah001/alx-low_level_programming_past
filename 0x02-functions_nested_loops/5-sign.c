#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: The number to be checked
 * Return: 1 and print '+', or 0 and print '0', or -1 and print '-'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
return (0);
}
