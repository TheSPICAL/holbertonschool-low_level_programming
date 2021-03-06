#include "main.h"

/**
 * _isalpha - check if the character is an alphabetic character
 * @c: The character the check if it's a an alphabetic character
 * Return: On success 1.
 * On error, 0 is returned, the character is uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
