#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>  /* Necessary for snprintf */

/**
 * struct print - Struct for format specifiers and their functions
 * @specifier: The format specifier
 * @f: Pointer to the corresponding print function
 */
typedef struct print
{
	char *specifier;
	int (*f)(va_list);
} print;

int _printf(const char *format, ...);
int (*get_print(char format))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_int(va_list args);
int print_reverse(va_list args);

#endif /* MAIN_H */

