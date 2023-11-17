#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char* argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
