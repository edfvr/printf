#include "main.h"

/**
 * _printf - produces ouput according to a format
 * @format: a character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_count = 0;

	char c;

	char *str;

	va_list argument_list;

	va_start(argument_list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (-1);

			if (*format == 'c')
			{
				c = va_arg(argument_list, int);
				write(1, &c, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				str = va_arg(argument_list, char *);
				while (*str)
				{
					write(1, str, 1);
					str++;
					char_count++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				char_count++;
			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(argument_list);
	return (char_count);
}
