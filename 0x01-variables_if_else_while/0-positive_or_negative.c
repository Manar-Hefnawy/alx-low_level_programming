#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Description: c program that assigns a random number to the variable n 
 *  each time it is executed and prints whether the number stored 
 *  in the variable n is positive, negative or zero.
 *
 *  Return: 0
 *   */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){
		printf("%d is positive", n)
	} else if (n<0){
		printf("%d is negative", n)
	} else {
		printf("%d is zero", n)
	};

	return (0);
}
