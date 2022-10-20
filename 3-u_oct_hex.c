#include "main.h"
/**
 * print_unsigned - prints unsigned numbers
 * @n : unsigned integer
 * Return: Number of
 */
int print_unsigned(unsigned int n)
{
	int length = 0, x = 1;
	unsigned int i;

	i = n;
	while ( i > 9)
	{
		i = i * 10;
		x = x / 10;
	}

	while (x > 0)
	{
		length = length + _putchar('0' + i / x);
		i = i % x;
		x = x / 10;
	}
	return (length);
}
