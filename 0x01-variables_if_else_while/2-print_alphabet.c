#include <stdio.h>

/**
 * main - A c program that Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int k;

	for (k = 0; k < 26; k++)
	{
		putchar(alp[k]);
	}
	putchar('\n');
	return (0);
}
