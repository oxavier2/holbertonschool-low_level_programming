#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc -allocate memory for an array
*@nmemb: int
*@size: int
*Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
