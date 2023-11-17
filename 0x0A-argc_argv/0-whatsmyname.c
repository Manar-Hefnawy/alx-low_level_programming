#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number of commmand line arguments
 * @argv: array containing the command line argument
 *
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
