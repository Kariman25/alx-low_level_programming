#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longk = 0;
	int o;

	while (*s != '\0')
	{
		longk++;
		s++;
	}
	s--;
	for (o = longk; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
