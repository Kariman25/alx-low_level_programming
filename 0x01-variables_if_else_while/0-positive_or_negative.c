#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A c program will assign a random number to the variable n
 * print whether the number stored in the variable n i
 * s positive or negative
 * Return: 0 (Success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
