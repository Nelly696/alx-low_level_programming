#include "main.h"

/**
 * _islower - entry point
 *
 * Description: function that checks for lowercase character
 *
 * @c:character to check if it islowercase
 *
 * Return: Always 0 (success)
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
