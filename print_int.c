#include "main.h"

/**
 * print_number - prints integer without handling negative
 * @n: number
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int char_count = 0;
	int digit, divisor, i, tmp, num_of_digits;

	if (n == 0)
	{
		_putchar('0');
		char_count++;
	}
	else
	{
		num_of_digits = 0;
		tmp = n;
		while (tmp > 0)
		{
			tmp /= 10;
			num_of_digits++;
		}

		divisor = 1;

		for (i = 1; i < num_of_digits; i++)
			divisor *= 10;

		while (divisor > 0)
		{
			digit = n / divisor;
			_putchar(digit + '0');
			n %= divisor;
			divisor /= 10;
			char_count++;
		}
	}
	return (char_count);
}

/**
 * print_int - prints integer
 *
 * @argument_list: argument to print
 * Return: Number of characters printed
 */
int print_int(va_list argument_list)
{
	int n = va_arg(argument_list, int);
	int char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		char_count++;
		n = -n;
	}

	char_count += print_number(n);

	return (char_count);
}
