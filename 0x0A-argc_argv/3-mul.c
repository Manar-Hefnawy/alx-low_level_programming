#include <stdlib.h>
#include <stdio.h>

/**
 * main - program should print the result of the multiplication
 * followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	} else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
}
