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
		{"c", print_character}, {"s", print_string}, {"%", print_percent_sym}, {NULL, NULL}
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
