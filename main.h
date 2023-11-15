#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_int(va_list argument_list);
int print_number(int n);
int _putchar(char c);

#endif
