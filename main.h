#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stddef.h>
/**
 * struct type_s - Struct type_s
 * @opt: options
 * @f: the associated function
 */
typedef struct type_s
{
	char opt;
	int (*f)(va_list);
} type_t;

int (*get_func(char s))(va_list);
int _putchar(char c);
int print_percent(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int _printf(const char *format, ...);

#endif
