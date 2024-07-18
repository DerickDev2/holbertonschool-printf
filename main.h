#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct print - structure to associate format specifiers
 * with functions
 * @spec: format specifier
 * @func: function to handle the format
 */
typedef struct print
{
	char *spec;
	int (*func)(va_list);
} print;

int (*get_print(char format))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_int(va_list args);

#endif

