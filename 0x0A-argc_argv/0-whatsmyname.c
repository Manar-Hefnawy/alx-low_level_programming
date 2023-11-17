#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: number of commmand line arguments
 * @argv: array containing the command line argument
 *
 * Return: 0 (always success)
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
