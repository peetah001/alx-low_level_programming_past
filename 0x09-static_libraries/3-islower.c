#include "main.h"
/**
 * _islower - check for lowercase character.
 * @c: The character to be checked
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

