#include "main.h"
/**
 * print_character - Prints characters
 * @args : arguments
 * Return: 
 */
int print_character(va_list list)
{
	int x = va_arg(list, int);
	_putchar(x);
	return (1);
}

/**
 * print_string - Prints a string of characters
 * @args : arguments
 * Return: number of characters
 */
int print_string(va_list list)
{
	char *s;
	int count;

	s = va_arg(list, char *);

	if (s == 0)
	{
		s = "null";
	}
	_puts(s);
	count = _strlen(s);
	return(count);
}

/**
 * print_percent_sym - prints the percent symbol
 * @args : arguments
 */
int print_percent_sym(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
