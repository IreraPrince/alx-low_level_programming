#include "main.h"
/**
 * _islower - shows 1v if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercaes character. 0 for the rest
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
