#include "main.h"
/**
 * _islower - lowercase letter.
 * @c: character to test.
 * Return: 1 if c is lowercase letter,  0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
