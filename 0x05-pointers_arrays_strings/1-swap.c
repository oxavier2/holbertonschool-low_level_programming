#include "main.h"
/**
*swap_int -swap to int
*@a: int a
*@b: int b
*Return: 0
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
