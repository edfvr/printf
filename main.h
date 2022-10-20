#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct - 
 * @c
 * @f
 */
struct fxns
{
	char *c;
	int (*f)(va_list);
};

typedef struct fxns fxns_t;

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);

int _printf(const char *format, ...);
int organize(const char *format, fxns_t functions[], va_list list);
int print_character(va_list);
int print_string(va_list);
int print_percent_sym(va_list);
int print_int(va_list);
int print_binary(char *dest, va_list args);
int print_unsigned(unsigned int n);

#endif /*MAIN_H*/
