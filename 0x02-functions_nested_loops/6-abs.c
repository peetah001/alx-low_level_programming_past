#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @c: The number to be computed
 * Return: Absolute value of number
 */

int _abs(int c)
{
	int x = c;
	int abs_val;

	if (x < 0)
	{
		x = x * (-1);
	}
	abs_val = x;
	return (abs_val);
}
