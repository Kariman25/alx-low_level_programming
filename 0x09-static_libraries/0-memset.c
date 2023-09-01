#include "main.h"
/**
 * _memset-code to fill a block of memory with a specific value
 * @c: begining address of memory to be filled
 * @b: the desired value
 * @n: number of bytes that changed
 *
 * Return: changed with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for ( ; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
