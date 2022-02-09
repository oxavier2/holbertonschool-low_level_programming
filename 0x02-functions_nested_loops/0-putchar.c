#include "stdio.h"
#include "main.h"
/**
 * main - print string " _putchar" from character array.
 * Return: 0 on sucess.
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar (c[i]);
	}

		_putchar ('\n');

	return (0);
}
