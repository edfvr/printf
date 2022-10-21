#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct - 
 * @c : operator
 * @f : function
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
unsigned int base_len(unsigned int n, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
void *rev_string(char *s);
void write_base(char *str);

int _printf(const char *format, ...);
int organize(const char *format, fxns_t functions[], va_list arg_list);
int print_character(va_list);
int print_string(va_list);
int print_percent_sym(va_list);
int print_number(va_list argmts);
int print_unsigned_number(unsigned int n);
int print_integer(va_list);
int print_binary(va_list list);
int print_unsigned_int(va_list list);
int print_octal(va_list list);
int print_hexadecimal(va_list list);
int print_HEX(va_list list);
int hex_check(int n, char c);
int rot13(va_list);
int print_reversed(va_list arg);

#endif /*MAIN_H*/
