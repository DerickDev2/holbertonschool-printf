#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>  /* Necesario para snprintf */

/**
 * struct print - Struct para los especificadores de formato y sus funciones
 * @specifier: El especificador de formato
 * @f: Puntero a la función correspondiente de impresión
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

