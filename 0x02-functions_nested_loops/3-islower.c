#include "main.h"

/**
 * _islower - check if char is lowercase or not
 *  @c : will be checked if lowercase or not
 * Return: 1 for lowercase and  otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
