#include "main.h"
/**
*_strchr -locates a char in string
*@s: char
*@c: char
*Return: 0
*/
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}

	if (s[i] == c)
	{
		p = &s[i];
	}
	else
		p = '\0';

	return (p);
}
