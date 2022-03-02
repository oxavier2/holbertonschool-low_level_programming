#include "main.h"
/**
*_memcpy -copy memory area
*@dest: char
*@src: char
*@n: unsigned int
*Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
