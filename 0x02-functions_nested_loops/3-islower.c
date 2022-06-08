#include "main.h"

/**
 * _islower - checks if a character is in lower case
 * @c: checks for letter c if it is in lower case
 * Return: 1 if not c and 0 if c is in lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
