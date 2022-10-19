#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format : contains the string to be written to stdout
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int chars;
	fxns_t functions[] = {
		{"c", print_character}, {"s", print_string}, {"%", print_percent_sym}, {"%d", print_int}, {"%i", print_int}, {NULL, NULL}
	};
	va_list list;

	if (format == 0)
	{
		return (-1);
	}

	va_start(list, format);
	chars = organize(format, functions, list);
	va_end(list);
	return (chars);	
}

#include "main.h"
/**
 * @format : A string
 * @functions : list of functions of format specifiers
 * @list : list of all arguments
 * Return: number of characters printed
 */
int organize(const char *format, fxns_t functions[], va_list list)
{
	int characters = 0;
	int i, j, n;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (j = 0; functions[j].c != NULL; j++)
			{
				if (format[i + 1] == functions[j].c[0])
				{
					n = functions[j].f(list);
					if (n == -1)
					{
						return (-1);
					}
					characters = characters + n;
					break;
				}
			}
			if (functions[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					characters += 2;
				}
				else
				{
					return (-1);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			characters++;
		}
		i++;
	}
	return (characters);
}