#include "main.h"

/**
 * get_print - Selecciona la función correcta para realizar la operación
 * @format: El especificador de formato pasado a _printf
 * 
 * Return: Un puntero a la función que corresponde
 *         al especificador dado como parámetro
 */
int (*get_print(char format))(va_list)
{
    int i;
    print func_type[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_mod},
        {"d", print_int},
        {"i", print_int},
        {"r", print_reverse},
        {NULL, NULL}
    };

    for (i = 0; func_type[i].specifier != NULL; i++)
    {
        if (*(func_type[i].specifier) == format)
            return (func_type[i].f);
    }
    return (NULL);
}

