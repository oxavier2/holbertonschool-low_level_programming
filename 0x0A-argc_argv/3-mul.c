#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int result1, result2;

	result1 = result2 = 0;
	if (argc == 3)
	{
		result1 = atoi(argv[1]);
		result2 = atoi(argv[2]);
		printf("%d\n", result1 * result2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
